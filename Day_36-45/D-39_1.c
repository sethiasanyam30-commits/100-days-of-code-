/*
Q77 (2D Arrays)
Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main() {
    int n, flag = 1;
    scanf("%d", &n);
    int mat[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(mat[i][i] == mat[j][j]) {
                flag = 0;
                break;
            }
    if(flag) printf("Distinct");
    else printf("Not Distinct");
    return 0;
}
