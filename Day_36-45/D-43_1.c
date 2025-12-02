/*
Q85 (Strings)
Reverse a string.
*/
#include <stdio.h>

int main() {
    char str[1000];
    int len = 0;
    fgets(str, sizeof(str), stdin);
    while(str[len] != '\0' && str[len] != '\n') len++;
    for(int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("%s", str);
    return 0;
}
