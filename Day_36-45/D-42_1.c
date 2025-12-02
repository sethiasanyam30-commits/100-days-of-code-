/*
Q83 (Strings)
Count vowels and consonants in a string.
*/
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int v = 0, c = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') v++;
            else c++;
        }
    }
    printf("%d %d", v, c);
    return 0;
}
