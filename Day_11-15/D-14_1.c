// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int n =0,sum=0;
    printf("enter any num: ");
    scanf("%d",&n);

for (int i = 1; i <=n; i+=2)
{
    sum+=i;
}
printf("the sum of first n odd numbers is %d",sum);
     return 0;
}