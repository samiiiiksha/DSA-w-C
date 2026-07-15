// 01. Find the 2nd largest number in an array.
// Given an integer array of size N. Find the second largest unique element in the array. If 2nd largest element doesn't exist, return -1.

#include <stdio.h>

int main() {

    int num[200];
    int i, N;

    printf("Enter the number of elements in array: ");
    scanf("%d", &N);

    printf("Enter the array elements: ");

    for(i=0; i<N; i++) {
        scanf("%d", &num[i]);
    }

    int largest = num[0];
    int secondLargest = -1;
    
    for (i=1; i<N; i++) {
        if (largest < num[i]) {
            secondLargest = largest;
            largest = num[i];
        } else if (num[i] > secondLargest && num[i] != largest) {
            secondLargest = num[i];
        }
    }

    printf("Second largest number is: %d", secondLargest);

    return 0;

}