/*
Q130 (File Handling)
Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "w");
    int n;
    scanf("%d", &n);
    char name[50];
    int roll, marks;
    for(int i = 0; i < n; i++) {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    for(int i = 0; i < n; i++) {
        fscanf(fp, "%s %d %d", name, &roll, &marks);
        printf("Name: %s Roll: %d Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
