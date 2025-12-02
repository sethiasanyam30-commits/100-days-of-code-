/*
Q150 (Enum)
Use pointer to struct to modify and display data using -> operator.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;
    scanf("%s %d %f", ptr->name, &ptr->roll_no, &ptr->marks);
    ptr->marks += 5;
    printf("Name: %s Roll No: %d Marks: %.2f\n", ptr->name, ptr->roll_no, ptr->marks);
    return 0;
}
