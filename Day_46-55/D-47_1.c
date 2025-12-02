/*
Q93 (Strings)
Check if two strings are anagrams of each other.
*/
#include <stdio.h>

int main() {
    char a[1000], b[1000];
    int freq1[256] = {0}, freq2[256] = {0}, i = 0;
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    while(a[i] != '\0' && a[i] != '\n') {
        freq1[(unsigned char)a[i]]++;
        i++;
    }
    i = 0;
    while(b[i] != '\0' && b[i] != '\n') {
        freq2[(unsigned char)b[i]]++;
        i++;
    }
    for(i = 0; i < 256; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}
