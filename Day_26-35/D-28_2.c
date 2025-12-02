/*
Q56 (Arrays (1D))
Read and print elements of a one-dimensional array.
*/

#include <stdio.h>

int main() {

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];   // 1D array

    // Read elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("Array elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
