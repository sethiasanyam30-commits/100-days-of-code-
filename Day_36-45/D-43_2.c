/*
Q86 (Strings)
Check if a string is a palindrome.
*/

#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, flag = 1;
    fgets(str, sizeof(str), stdin);
    while(str[len] != '\0' && str[len] != '\n') len++;
    for(int i = 0, j = len - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
