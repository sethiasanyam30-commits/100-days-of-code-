/*
Q101 (Logic Enhancers)
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
The elements in the sorted array might be repeated. You need to print the first and 
last occurrence of the target and print the index of first and last occurrence.
 Print -1, -1 if the target is not present.
*/

#include <stdio.h>

int main() {
    int n, target, first = -1, last = -1;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &target);
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            first = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] == target) {
            last = i;
            break;
        }
    }
    printf("%d %d", first, last);
    return 0;
}
