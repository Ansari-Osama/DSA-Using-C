// WAP to Implement Binary Search.

#include <stdio.h>

int binarySearch(int array[], int size, int element);

int binarySearch(int array[], int size, int element)
{
    int low = 0, high = size - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == element)
        {
            return mid;
        }
        if (element > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[100], size, element, index;
    printf("\n Enter the Size of an Array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d Element: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d  ", i, arr[i]);
    }
    printf("\n Enter the Element you want to Search: ");
    scanf("%d", &element);
    index = binarySearch(arr, size, element);
    printf("\n Element %d is Found at %d Index ", element, index);
    return 0;
}