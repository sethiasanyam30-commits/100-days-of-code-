/*
Q147 (Enum)
Store employee data in a binary file using fwrite() and read using fread().
*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Employee e[n];
    for(int i = 0; i < n; i++) scanf("%s %d %f", e[i].name, &e[i].id, &e[i].salary);

    FILE *fp = fopen("employees.dat", "wb");
    fwrite(e, sizeof(struct Employee), n, fp);
    fclose(fp);

    struct Employee temp;
    fp = fopen("employees.dat", "rb");
    for(int i = 0; i < n; i++) {
        fread(&temp, sizeof(struct Employee), 1, fp);
        printf("Name: %s ID: %d Salary: %.2f\n", temp.name, temp.id, temp.salary);
    }
    fclose(fp);
    return 0;
}
