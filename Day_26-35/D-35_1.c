/*
Q69 (Arrays (1D))
Find the second largest element in an array.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max = arr[0], second = -2147483648;
    for(int i = 1; i < n; i++) if(arr[i] > max) max = arr[i];
    for(int i = 0; i < n; i++) if(arr[i] != max && arr[i] > second) second = arr[i];
    printf("%d", second);
    return 0;
}
