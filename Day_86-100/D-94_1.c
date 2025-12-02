/*
Q144 (Enum)
Write a function that accepts a structure as parameter and prints its members.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;
    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);
    printStudent(s);
    return 0;
}
