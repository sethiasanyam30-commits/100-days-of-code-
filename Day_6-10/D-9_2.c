// Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>

int main() {
    float m;
    scanf("%f",&m);

    if (m>=90&&m<=100)
    {
        printf("Grade A");
    }
    else if (m>=80&&m<=89)
    {
        printf("Grade B");
    }
    else if (m>=70&&m<=79)
    {
        printf("Grade C");
    }
    else if (m>=60&&m<=69)
    {
        printf("Grade D");
    }
    else if (m<60)
    {
        printf("Grade F");
    }
  
     return 0;
}
