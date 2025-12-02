/*
Q145 (Enum)
Return a structure containing top student's details from a function.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student topStudent(struct Student s[], int n) {
    struct Student top = s[0];
    for(int i = 1; i < n; i++) if(s[i].marks > top.marks) top = s[i];
    return top;
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[n];
    for(int i = 0; i < n; i++) scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    struct Student top = topStudent(s, n);
    printf("Name: %s Roll No: %d Marks: %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}
