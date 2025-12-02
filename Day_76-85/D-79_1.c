/*
Q129 (File Handling)
A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int num, sum = 0, count = 0;
    while(fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    printf("Sum: %d\nAverage: %.2f\n", sum, (count? (float)sum/count : 0.0));
    fclose(fp);
    return 0;
}
