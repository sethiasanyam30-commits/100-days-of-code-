/*
Q132 (Enum)
Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
*/

#include <stdio.h>

enum Traffic {RED, YELLOW, GREEN};

int main() {
    enum Traffic t;
    scanf("%d", &t);
    if(t == RED) printf("Stop");
    else if(t == YELLOW) printf("Wait");
    else if(t == GREEN) printf("Go");
    else printf("Invalid");
    return 0;
}
