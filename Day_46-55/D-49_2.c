/*
Q98 (Strings)
Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, lastStart = 0;

    fgets(str, sizeof(str), stdin);

    if(str[0] != ' ' && str[0] != '\n') printf("%c. ", str[0]);

    while(str[i] != '\0') {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n') {
            lastStart = i + 1;
            printf("%c. ", str[i+1]);
        }
        i++;
    }

    i = lastStart;
    while(str[i] != '\n' && str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}
