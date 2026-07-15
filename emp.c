#include <stdio.h>

int main() {

    char empName[50];
    int baSal;

    printf("Enter the employee name: ");
    scanf("%s", empName);

    printf("Enter the base salary: ");
    scanf("%d", &baSal);

    float hraa = 0.2 * baSal;
    float daa = 0.1 * baSal;
    float taxx = 0.05 * baSal;

    printf("Employee: %s\n", empName);
    printf("HRA : %f\n", hraa);
    printf("DA : %f\n", daa);
    printf("Tax : %f\n", taxx);

    printf("Net salary : %f\n", (baSal + hraa + daa) - taxx);

    return 0;
}