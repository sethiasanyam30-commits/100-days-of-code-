/*
Q118 (Logic Enhancers)
Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing numbe
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n-1], sum = 0;
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int total = n * (n - 1) / 2;
    printf("%d", total - sum);
    return 0;
}
