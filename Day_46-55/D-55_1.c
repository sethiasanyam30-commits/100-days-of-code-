/*
Q105 (Logic Enhancers)
Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
*/

#include <stdio.h>

int main() {
    int n, candidate, count = 0, freq = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        } else if(arr[i] == candidate) count++;
        else count--;
    }

    for(int i = 0; i < n; i++)
        if(arr[i] == candidate) freq++;

    if(freq > n / 2) printf("%d", candidate);
    else printf("-1");

    return 0;
}
