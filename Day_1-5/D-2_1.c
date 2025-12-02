// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main() {
    int L,B,P,A;

    L=10, B=5;
    P=2*(L+B), A=L*B;

    printf("Area=%d, perimeter=%d",A,P);

     return 0;
}