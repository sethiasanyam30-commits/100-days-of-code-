/*
Q81 (Strings)
Count characters in a string without using built-in length functions.
*/
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) count++;
    if(str[count-1] == '\n') count--;
    printf("%d", count);
    return 0;
}
