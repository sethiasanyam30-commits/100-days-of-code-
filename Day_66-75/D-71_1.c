/*
Q121 (File Handling)
Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved
*/
#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "w");
    char name[100];
    int age;
    scanf("%s %d", name, &age);
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("Data successfully saved");
    return 0;
}
