/*
Q73 (2D Arrays)
Find the sum of each row of a matrix and store it in an array.
*/
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c], rowSum[r];
    for(int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }
    for(int i = 0; i < r; i++) printf("%d ", rowSum[i]);
    return 0;
}
