/*
Q124 (File Handling)
Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/

#include <stdio.h>

int main() {
    char src[100], dest[100];
    scanf("%s %s", src, dest);
    FILE *fs = fopen(src, "r");
    FILE *fd = fopen(dest, "w");
    char ch;
    while((ch = fgetc(fs)) != EOF) fputc(ch, fd);
    fclose(fs);
    fclose(fd);
    return 0;
}
