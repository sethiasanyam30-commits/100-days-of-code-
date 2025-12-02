/*
Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.
*/
#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);
    int count[10] = {0};
    if(num < 0) num = -num;
    while(num > 0) {
        count[num % 10]++;
        num /= 10;
    }
    int max = 0, digit = 0;
    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            digit = i;
        }
    }
    printf("%d", digit);
    return 0;
}
