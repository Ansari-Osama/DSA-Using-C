// WAP to Implement Insert Operation of an Array.

#include <stdio.h>
void displayArray(int arr[], int size);
void insertInAnArray(int arr[], int size, int capacity, int element, int index);

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n a[%d] = %d", i, arr[i]);
    }
}

void insertInAnArray(int arr[], int size, int capacity, int element, int index)
{
    if (size >= capacity)
    {
        printf("\n Array is Full");
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }
}

void main()
{
    int size, arr[100], element, index;
    printf("\n Enter the Size of an Array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d Element: ", i);
        scanf("%d", &arr[i]);
    }
    displayArray(arr, size);
    printf("\n Enter the Index where you want to Insert New Element: ");
    scanf("%d", &index);
    printf("\n Enter the Element you want to Insert at %d Index", index);
    scanf("%d", &element);
    insertInAnArray(arr, size, 100, element, index);
    size = size + 1;
    displayArray(arr, size);
}