// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main() {
    char c;
    
    scanf("%c",&c);

    // if (c==65||c==69||c==73||c==79||c==85||c==61||c==101||c==105||c==111||c==117)
    if ((c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U')||
        (c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))

    {
        printf("vowel");
    }
    else if ((c>=65&&c<=90)||(c>=97&&c<=122))
    {
         printf("consonant");
    }
    else

    {
        printf("niether vowel nor consonant");
    }
    
     return 0;
}