/*
Q127 (File Handling)
Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    char ch;
    while((ch = fgetc(fin)) != EOF) fputc(toupper(ch), fout);
    fclose(fin);
    fclose(fout);
    return 0;
}
