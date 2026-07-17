#include <stdio.h>

int main() {
    int arr[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements in the array: \n");
    for (int i = 0; i<size; i++) {
        scanf("\n%d", &arr[i]);
    }

    printf("---------------------------------\n");

    for (int i = 0; i<size; i++) {
        for (int j = i; j<size; j++) {
            printf("[");
            for (int k = i; k<=j; k++) {
                printf(" %d ", arr[k]);
            }

            printf("] ");
        }
    }

    return 0;
}
