#include <stdio.h>
#include <stdlib.h>

int* createArray(int size);
void inputArray(int arr[], int size);
void displayArray(int arr[], int size);
void releaseMemory(int *arr);

int main()
{
    int size;
    int *arr;

    printf("\nEnter Number of Elements : ");
    scanf("%d", &size);

    if(size <= 0)
    {
        printf("\nInvalid Array Size!\n");
        return 0;
    }

    arr = createArray(size);

    inputArray(arr, size);
    displayArray(arr, size);
    releaseMemory(arr);

    printf("\nProgram Executed Successfully.\n");

    return 0;
}

int* createArray(int size)
{
    int *ptr;

    ptr = (int *)malloc(size * sizeof(int));

    if(ptr == NULL)
    {
        printf("\nMemory Allocation Failed!\n");
        exit(0);
    }

    printf("\nMemory Allocated Successfully!\n");

    return ptr;
}

void inputArray(int arr[], int size)
{
    printf("\nEnter %d Elements\n", size);

    for(int i = 0; i < size; i++)
    {
        printf("Element [%d] : ", i);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int size)
{
    printf("\n-------------------------------------\n");
    printf("Array Elements\n");
    printf("\n-------------------------------------\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("\nTime Complexity : O(n)\n");
}

void releaseMemory(int *arr)
{
    free(arr);

    printf("\nMemory Released !!");
}