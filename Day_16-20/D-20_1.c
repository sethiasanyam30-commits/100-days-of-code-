// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int n, digit, product = 1, hasOdd = 0;
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;       // get last digit
        if (digit % 2 == 1) { // check if odd
            product *= digit;
            hasOdd = 1;       // at least one odd digit found
        }
        n = n / 10;           // remove last digit
    }

    if (!hasOdd)  // if no odd digits, product should be 1
        product = 1;

    printf("%d\n\t", product);
    return 0;
}
