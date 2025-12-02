/*
Q117 (Logic Enhancers)
Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int a[m];
    for(int i = 0; i < m; i++) scanf("%d", &a[i]);

    scanf("%d", &n);
    int b[n];
    for(int i = 0; i < n; i++) scanf("%d", &b[i]);

    int res[m+n], i = 0, j = 0, k = 0;

    while(i < m && j < n) {
        if(a[i] < b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while(i < m) res[k++] = a[i++];
    while(j < n) res[k++] = b[j++];

    for(int x = 0; x < m+n; x++) printf("%d ", res[x]);
    return 0;
}
