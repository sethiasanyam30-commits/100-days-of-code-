// Q1: Write a program to input two numbers and display their sum.

// #include <stdio.h>
// int main() {
//     int n1,n2;

//     printf("SUM FOR TWO NUMBERS\n\n");
//     printf("enter 1st no.: ");
//     scanf("%d",&n1);
//     printf("enter 2nd no.: ");
//     scanf("%d",&n2);

//     int S=n1+n2;
//     printf("Sum of Two given numbers is : %d",S);

//      return 0;
// }

#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d %d",&n1,&n2);
    int sum = n1 + n2;
    printf("sum = %d", sum);
    return 0;
}