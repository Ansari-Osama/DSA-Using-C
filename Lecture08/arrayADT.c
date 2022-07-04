// WAP to Implement Array ADT.

#include <stdio.h>
#include <stdlib.h>

struct myArray // Structure is used to create our own data type.
{
    int total_size; // Total memory to be reserved.
    int used_size;  // Memory to bu used out of total memory.
    int *ptr;       // Point to first location of array which is created dynamically in heap memory.
};

void createArray(struct myArray *a, int tSize, int uSize)
{
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int *) malloc(tSize*sizeof(int));

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void setValue(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("\n Enter %d Element: ", i);
        scanf("%d", &((a->ptr)[i]));
    }
}

void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("\n a[%d] =  %d", i, (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;
    int tSize, uSize;
    printf("\n We are Running createArray Now");
    printf("\n Enter the Total Size: ");
    scanf("%d", &tSize);
    printf("\n Enter the Used Size: ");
    scanf("%d", &uSize);
    createArray(&marks, tSize, uSize);
    printf("\n We are Running setValue Now");
    setValue(&marks);
    printf("\n We are Running show Now");
    show(&marks);
    return 0;
}