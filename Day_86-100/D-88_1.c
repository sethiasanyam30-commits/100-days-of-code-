/*
Q138 (Enum)
Print all enum names and integer values using a loop.
*/

#include <stdio.h>

enum Colors {RED, GREEN, BLUE, YELLOW, ORANGE};

int main() {
    enum Colors c;
    char *names[] = {"RED", "GREEN", "BLUE", "YELLOW", "ORANGE"};
    for(c = RED; c <= ORANGE; c++) printf("%s %d\n", names[c], c);
    return 0;
}
