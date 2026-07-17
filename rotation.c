#include <stdio.h>

int main() {
    int arr[100];
    int k;
    int size;
    int temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements in the array: ");
    for (int i = 0; i<size; i++) {
        scanf("\n%d", &arr[i]);
    }

    printf("Enter the no. of positions to rotate by: ");
    scanf("%d", &k);

    for (int i = 1; i<=k; i++) {

        temp = arr[size-1];

        for (int j = size - 1 ; j > 0; j--) {
            arr[j] = arr[j-1];
        }

        arr[0] = temp;
    }

    printf("Array after rotation is: ");

    for (int i = 0; i<size; i++) {
        printf("\n%d", arr[i]);
    }
}