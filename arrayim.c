
#include<stdio.h>

void insert(int arr[], int *size);
void deleteElement(int arr[], int *size);
void display(int arr[], int size);
void update(int arr[], int size);
void search(int arr[], int size);
void sort(int arr[], int size);

int main()
{
    int size;
    int choice;
    int arr[100];

    printf("Enter the number of elements : ");
    scanf("%d",&size);

    printf("Enter the array Elements\n");

    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    do
    {
        printf("\n-------------------------------\n");
        printf("           MAIN MENU");
        printf("\n-------------------------------\n");

        printf("1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Update\n");
        printf("5. Search\n");
        printf("6. Sort\n");
        printf("7. Exit\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                display(arr,size);
                break;

            case 2:
                insert(arr,&size);
                break;

            case 3:
                deleteElement(arr,&size);
                break;

            case 4:
                update(arr,size);
                break;

            case 5:
                search(arr,size);
                break;

            case 6:
                sort(arr,size);
                printf("Array Sorted!!\n");
                break;

            case 7:
                printf("Program Ended!!\n");
                break;

            default:
                printf("Invalid Choice!!\n");
        }

    } while(choice != 7);

    return 0;
}

void display(int arr[], int size)
{
    printf("\nArray Elements: \n");

    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);

    printf("\n");

    printf("Time Complexity : O(n)\n");
}

void insert(int arr[], int *size)
{
    int pos,value;

    printf("Enter Position: ");
    scanf("%d",&pos);

    printf("Enter Value: ");
    scanf("%d",&value);

    for(int i=*size;i>pos;i--)
        arr[i]=arr[i-1];

    arr[pos]=value;

    (*size)++;

    printf("Element Inserted!!\n");

    printf("Time Complexity : O(n)\n");
}

void deleteElement(int arr[], int *size)
{
    int pos;

    printf("Enter Position: ");
    scanf("%d",&pos);

    for(int i=pos;i<*size-1;i++)
        arr[i]=arr[i+1];

    (*size)--;

    printf("Element Deleted!!\n");

    printf("Time Complexity : O(n)\n");
}

void update(int arr[], int size)
{
    int pos,value;

    printf("Enter Position: ");
    scanf("%d",&pos);

    printf("Enter New Value: ");
    scanf("%d",&value);

    arr[pos]=value;

    printf("Updated Successfully!!\n");

    printf("Time Complexity : O(1)\n");
}

void search(int arr[], int size)
{
    int key;

    printf("Enter Number to Search: ");
    scanf("%d",&key);

    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            printf("Element Found at Position %d\n",i);
            printf("Time Complexity : O(n)\n");
            return;
        }
    }

    printf("Element Not Found!!\n");

    printf("Time Complexity : O(n)\n");
}

void sort(int arr[], int size)
{
    int temp;

    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Time Complexity : O(n²)\n");
}