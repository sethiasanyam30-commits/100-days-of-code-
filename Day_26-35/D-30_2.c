/*
Q60 (Arrays (1D))
Count positive, negative, and zero elements in an array.
*/

#include <stdio.h>

int main() {
    int n, p = 0, ng = 0, z = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) p++;
        else if(arr[i] < 0) ng++;
        else z++;
    }
    printf("%d %d %d", p, ng, z);
    return 0;
}

