/*
Q55 (Nested Loops without Arrays/Strings)
Write a program to print all the prime numbers from 1 to n.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {      // i → number to check

        int isPrime = 1;              // assume prime

        for(int j = 2; j * j <= i; j++) { // check factors
            if(i % j == 0) {
                isPrime = 0;          // not prime
                break;
            }
        }

        if(isPrime)
            printf("%d ", i);
    }

    return 0;
}
