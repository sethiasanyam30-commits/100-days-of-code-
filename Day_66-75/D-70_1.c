/*
Q120 (File Handling)
Write a program to take a string input. Change it to sentence case.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int capitalize = 1, i = 0;
    while(str[i] != '\0') {
        if(isalpha(str[i])) {
            if(capitalize) str[i] = toupper(str[i]);
            else str[i] = tolower(str[i]);
            capitalize = 0;
        } else if(str[i] == '.' || str[i] == '!' || str[i] == '?') capitalize = 1;
        i++;
    }
    printf("%s", str);
    return 0;
}
