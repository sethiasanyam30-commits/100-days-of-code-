/*
Q94 (Strings)
Find the longest word in a sentence.
*/
#include <stdio.h>

int main() {
    char str[1000], longest[1000];
    int i = 0, len = 0, maxLen = 0, start = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            if(len == 0) start = i;
            len++;
        } else {
            if(len > maxLen) {
                maxLen = len;
                for(int k = 0; k < len; k++) longest[k] = str[start + k];
                longest[len] = '\0';
            }
            len = 0;
        }
        i++;
    }
    printf("%s", longest);
    return 0;
}
