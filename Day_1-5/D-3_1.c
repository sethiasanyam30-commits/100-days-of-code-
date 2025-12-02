// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {

    int T_C;

    printf("Enter Temp in Celsius :");
    scanf("%d",&T_C);

    float F=32+(T_C*(9.0/5.0));
    printf("Fahrenheit=%.2f",F);

     return 0;
}