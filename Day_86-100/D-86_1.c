/*
Q136 (Enum)
Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/

#include <stdio.h>

enum Menu {ADD, SUBTRACT, MULTIPLY};

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    enum Menu choice;
    scanf("%d", &choice);
    switch(choice) {
        case ADD: printf("%d", a+b); break;
        case SUBTRACT: printf("%d", a-b); break;
        case MULTIPLY: printf("%d", a*b); break;
        default: printf("Invalid Choice");
    }
    return 0;
}
