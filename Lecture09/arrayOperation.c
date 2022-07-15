// WAP to Implemet Basic Operations of an Array.

#include <stdio.h>

void createArray(int array[], int capacity, int size);
void insertInArray(int array[], int capacity, int size, int element, int index);
void deletionInArray(int array[], int capacity, int size, int index);
void displayArray(int array[], int size);
int searchInArray(int array[], int size, int element);

void createArray(int array[], int capacity, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d Element: ", i);
        scanf("%d", &array[i]);
    }
}

void displayArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d  ", i, array[i]);
    }
}

void insertInArray(int array[], int capacity, int size, int element, int index)
{
    if (size >= capacity)
    {
        printf("\n Array is Overflow, No More Elements are Inserted! ");
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            array[i + 1] = array[i];
        }
        array[index] = element;
    }
}

void deletionInArray(int array[], int capacity, int size, int index)
{
    if (size == 0)
    {
        printf("\n Array is Underflow, There is No Element in an Array! ");
    }
    else
    {
        for (int i = index; i < size; i++)
        {
            array[i] = array[i + 1];
        }
    }
}

int searchInArray(int array[], int size, int element)
{
    int low = 0, high = size - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == element)
        {
            return mid;
        }
        if (array[mid] < element)
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
    int array[100], choice, capacity = 100, size, element, index;
    do
    {
        printf("\n 1: Create");
        printf("\n 2: Insert");
        printf("\n 3 : Delete");
        printf("\n 4 : Display");
        printf("\n 5 : Search");
        printf("\n 6 : Exit");
        printf("\n");

        printf("\n Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("\n Enter the Size of an Array: ");
            scanf("%d", &size);
            createArray(array, capacity, size);
            break;
        }

        case 2:
        {
            printf("\n Enter the Element you want to Insert: ");
            scanf("%d", &element);
            printf("\n Enter the Index at which you want to Insert Element %d: ", element);
            scanf("%d", &index);
            insertInArray(array, capacity, size, element, index);
            size += 1;
            break;
        }

        case 3:
        {
            printf("\n Enter the Position which you want to Delete");
            scanf("%d", &index);
            deletionInArray(array, capacity, size, index);
            size -= 1;
            break;
        }

        case 4:
        {
            displayArray(array, size);
            break;
        }

        case 5:
        {
            int element;
            printf("\n Enter the Element you want to Search: ");
            scanf("%d", &element);
            int index = searchInArray(array, size, element);
            printf("\n Element %d is Found at Index %d ", element, index);
            break;
        }
        }
    } while (choice != 6);
    return 0;
}