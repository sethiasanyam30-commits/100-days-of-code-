/*
Q139 (Enum)
Show that enums store integers by printing assigned values.
*/

#include <stdio.h>

enum Numbers {ONE=1, TWO=5, THREE, FOUR=10, FIVE};

int main() {
    enum Numbers n;
    for(n = ONE; n <= FIVE; n++) printf("%d\n", n);
    return 0;
}
