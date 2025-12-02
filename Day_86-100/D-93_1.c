/*
Q143 (Enum)
Find and print the student with the highest marks.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[n], top;
    for(int i = 0; i < n; i++) scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    top = s[0];
    for(int i = 1; i < n; i++) if(s[i].marks > top.marks) top = s[i];
    printf("Name: %s Roll No: %d Marks: %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}
