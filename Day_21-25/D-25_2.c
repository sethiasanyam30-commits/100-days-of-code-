// Q50: Write a program to print the following pattern:
// *****
// ****
// ***
// **
// *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
****
***
**
*
Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int n = 5;  // number of rws

    for (int i = n; i >= 1; i--) {        // rows
        for (int j = 1; j <= i; j++) {    // print stars
            printf("*");
        }
        printf("\n"); // move to next line
    }
    return 0;
}