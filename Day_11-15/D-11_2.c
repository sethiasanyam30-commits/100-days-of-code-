// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main() {
    int cp, sp;
    scanf(" %d%d",&cp,&sp);

    if (sp>cp)
    {
        printf("profit %d%%",((sp-cp)*100)/cp);
    }
    if (sp<cp)
    {
        printf("Loss %d%%",((cp-sp)*100)/cp);
    }
    if (sp==cp)
    {
        printf("No Profit, No Loss 0%%");
    }
    
     return 0;
}