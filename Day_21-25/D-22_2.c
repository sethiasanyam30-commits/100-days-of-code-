// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float sum = 0.0;
    int num = 1, den = 2;

    for (int i = 1; i <= n; i++) {
        if (i == 1)
            sum += 1;             // first term is just 1
        else
            sum += (float)num / den;

        num += 2; // numerator increases by 2 each time
        den += 2; // denominator increases by 2 each time
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
