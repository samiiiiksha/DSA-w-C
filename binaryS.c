#include <stdio.h>

int main() {
    int arr[5];
    int key;
    int mid;
    int j = 0;

    int low = 0;
    int high = 4;

    printf("Enter the elements: \n\n");
    for (int i = 0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to find: ");
    scanf("%d", &key);

    while (low!=high) {
        int mid = (low+high)/2;

        if (arr[mid] == key) {
            printf("Element found!! ");
            j = 1;
            break;
        }

        if (arr[mid]<key) {
            low = mid + 1;
        }

        if (arr[mid]>key) {
            high = mid - 1;
        }
    }

    if (j==0) {
        printf("Element was not found!");
    }
}