/*
Q99 (Strings)
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>

int main() {
    char s[20], m[12][4] = {
        "Jan","Feb","Mar","Apr","May","Jun",
        "Jul","Aug","Sep","Oct","Nov","Dec"
    };
    int month;
    fgets(s, sizeof(s), stdin);
    month = (s[3]-'0')*10 + (s[4]-'0');
    printf("%c%c-%s-", s[0], s[1], m[month-1]);
    for(int i=6; s[i]!='\0' && s[i]!='\n'; i++) printf("%c", s[i]);
    return 0;
}
