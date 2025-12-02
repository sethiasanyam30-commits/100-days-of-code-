/*
Q123 (File Handling)
Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    char ch;
    int chars = 0, words = 0, lines = 0, inWord = 0;

    while((ch = fgetc(fp)) != EOF) {
        chars++;
        if(ch == '\n') lines++;
        if(!isspace(ch)) inWord = 1;
        else if(inWord) {
            words++;
            inWord = 0;
        }
    }
    if(inWord) words++;
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    fclose(fp);
    return 0;
}
