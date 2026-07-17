#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size);
void insertElement(int arr[], int *size);
void deleteElement(int arr[], int *size);
void updateElement(int arr[], int size);

int main()
{
    int *arr;
    int size;
    int choice;

    printf("Enter Initial Array Size : ");
    scanf("%d", &size);

    if(size <= 0 || size > 100)
    {
        printf("Invalid Size!\n");
        return 0;
    }

    arr = (int *)malloc(100 * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 0;
    }

    printf("\nEnter %d Elements\n", size);

    for(int i = 0; i < size; i++)
    {
        printf("Element [%d] : ", i);
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n---------------------------------------\n");
        printf("                 MENU\n");
        printf("\n---------------------------------------\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Update Element\n");
        printf("5. Exit\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                display(arr, size);
                break;

            case 2:
                insertElement(arr, &size);
                break;

            case 3:
                deleteElement(arr, &size);
                break;

            case 4:
                updateElement(arr, size);
                break;

            case 5:
                printf("\nReleasing Memory...\n");
                free(arr);
                printf("Memory Released Successfully.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}

void display(int arr[], int size)
{
    printf("\nArray Elements\n");

    if(size == 0)
    {
        printf("Array is Empty.\n");
        return;
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Time Complexity : O(n)\n");
}

void insertElement(int arr[], int *size)
{
    int position;
    int value;

    if(*size >= 100)
    {
        printf("Array is Full.\n");
        return;
    }

    printf("Enter Position (0-%d) : ", *size);
    scanf("%d", &position);

    if(position < 0 || position > *size)
    {
        printf("Invalid Position.\n");
        return;
    }

    printf("Enter Value : ");
    scanf("%d", &value);

    for(int i = *size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;

    (*size)++;

    printf("Element Inserted Successfully.\n");
    printf("Time Complexity : O(n)\n");
}

void deleteElement(int arr[], int *size)
{
    int position;

    if(*size == 0)
    {
        printf("Array is Empty.\n");
        return;
    }

    printf("Enter Position to Delete (0-%d) : ", *size - 1);
    scanf("%d", &position);

    if(position < 0 || position >= *size)
    {
        printf("Invalid Position.\n");
        return;
    }

    for(int i = position; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*size)--;

    printf("Element Deleted Successfully.\n");
    printf("Time Complexity : O(n)\n");
}

void updateElement(int arr[], int size)
{
    int position;
    int value;

    if(size == 0)
    {
        printf("Array is Empty.\n");
        return;
    }

    printf("Enter Position to Update (0-%d) : ", size - 1);
    scanf("%d", &position);

    if(position < 0 || position >= size)
    {
        printf("Invalid Position.\n");
        return;
    }

    printf("Current Value : %d\n", arr[position]);

    printf("Enter New Value : ");
    scanf("%d", &value);

    arr[position] = value;

    printf("Element Updated Successfully.\n");
    printf("Time Complexity : O(1)\n");
}