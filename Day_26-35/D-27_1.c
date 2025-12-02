/*
Q53 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {

    // Upper part: 1,3,5,7,9 stars
    for(int i = 1; i <= 9; i += 2) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part: 7,5,3,1 stars
    for(int i = 7; i >= 1; i -= 2) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
