/*
Q134 (Enum)
Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
*/

#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status s;
    scanf("%d", &s);
    if(s==SUCCESS) printf("Operation Successful");
    else if(s==FAILURE) printf("Operation Failed");
    else if(s==TIMEOUT) printf("Operation Timed Out");
    else printf("Invalid Status");
    return 0;
}
