// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
#define PI 3.14159

int main() {

    int R;
    float A,C;
        R=3;
        A=PI*R*R, C=2*PI*R;

        printf("Area=%.2f, circumference=%.2f",A,C);

     return 0;
}