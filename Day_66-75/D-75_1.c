/*
Q125 (File Handling)
Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "a");
    char line[1000];
    fgets(line, sizeof(line), stdin);
    fprintf(fp, "%s", line);
    fclose(fp);
    return 0;
}
