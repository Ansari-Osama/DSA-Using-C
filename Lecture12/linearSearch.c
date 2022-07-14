// WAP to Implement Linear Search.

#include <stdio.h>

int linearSearch(int array[], int size, int element);

int linearSearch(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[100], size, element;
    printf("\n Enter the Size of an Array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d Element: ", i);
        scanf("%d", &array[i]);
    }
    scanf("%d", &element);
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d  ", i, array[i]);
    }
    printf("\n Enter the Element you want to Search: ");
    int index = linearSearch(array, size, element);
    printf("\n Element %d is Found at %d Index", element, index);
    return 0;
}