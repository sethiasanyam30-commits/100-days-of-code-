/*
Q110 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
*/

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int dq[n], front = 0, back = -1;

    for(int i = 0; i < k; i++) {
        while(front <= back && arr[dq[back]] <= arr[i]) back--;
        dq[++back] = i;
    }

    printf("%d ", arr[dq[front]]);

    for(int i = k; i < n; i++) {
        if(dq[front] == i - k) front++;
        while(front <= back && arr[dq[back]] <= arr[i]) back--;
        dq[++back] = i;
        printf("%d ", arr[dq[front]]);
    }

    return 0;
}
