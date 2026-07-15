#include <stdio.h>

int main() {
    for (int k = 1; k<=5; k++) {
        for (int i = 1; i<=5-k; i++) {
            printf(" ");
        }
        for (int j = 1; j<=2*k-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}