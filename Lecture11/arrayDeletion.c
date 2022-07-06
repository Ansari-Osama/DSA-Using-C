// WAP to Implement Delete Operation of an Array.

#include <stdio.h>
void displayArray(int arr[], int size);
void deletionInAnArray(int arr[], int size, int capacity, int index);

void displayArray(int arr[], int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("\t a[%d] = %d", i, arr[i]);
    }
}

void deletionInAnArray(int arr[], int size, int capacity, int index)
{
    if (size == 0)
    {
        printf("\n Array is Already Empty!");
    }
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void main()
{
    int arr[100], size, index;
    printf("\n Enter the Size of an Array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d Element: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the Index from where you want to Delete an Element: ");
    scanf("%d", &index);
    displayArray(arr, size);
    deletionInAnArray(arr, size, 100, index);
    size = size - 1;
    displayArray(arr, size);
}