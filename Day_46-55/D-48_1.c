/*
Q95 (Strings)
Check if one string is a rotation of another.
*/

#include <stdio.h>

int main() {
    char a[1000], b[1000], c[2000];
    int i = 0, j = 0, k = 0, lenA = 0, lenB = 0;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    while(a[lenA] != '\0' && a[lenA] != '\n') lenA++;
    while(b[lenB] != '\0' && b[lenB] != '\n') lenB++;

    if(lenA != lenB) {
        printf("Not Rotation");
        return 0;
    }

    for(i = 0; i < lenA; i++) c[i] = a[i];
    for(j = 0; j < lenA; j++) c[i + j] = a[j];
    c[2 * lenA] = '\0';

    i = 0; 
    while(c[i] != '\0') {
        j = i;
        k = 0;
        while(c[j] == b[k] && b[k] != '\0') {
            j++;
            k++;
        }
        if(k == lenB) {
            printf("Rotation");
            return 0;
        }
        i++;
    }

    printf("Not Rotation");
    return 0;
}
