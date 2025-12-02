/*
Q79 (2D Arrays)
Perform diagonal traversal of a matrix.
*/
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    for(int d = 0; d < r + c - 1; d++) {
        int i = d < r ? d : r - 1;
        int j = d < r ? 0 : d - r + 1;
        while(i >= 0 && j < c) {
            printf("%d ", mat[i][j]);
            i--; j++;
        }
    }
    return 0;
}
