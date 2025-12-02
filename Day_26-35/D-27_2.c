/*
Q54 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {

    // Upper part: 1,3,5,7 stars
    for(int i = 1; i <= 7; i += 2) {

        // Print spaces
        for(int s = 1; s <= (7 - i) / 2; s++) {
            printf(" ");
        }

        // Print stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower part: 5,3,1 stars
    for(int i = 5; i >= 1; i -= 2) {

        // Print spaces
        for(int s = 1; s <= (7 - i) / 2; s++) {
            printf(" ");
        }

        // Print stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
