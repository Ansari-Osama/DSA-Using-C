// WAP to Generate Multiplication Table of a Given Number.

#include <stdio.h>
void main()
{
    int n, i = 1;
    printf("Enter the Number whose Multiplication Table you want to Print: ");
    scanf("%d", &n);

    // while (i <= 10)
    // {
    //     printf("\n %d * %d = %d", n, i, (n * i));
    //     i++;
    // }
    for (i = 1; i <= 10; i++)
    {
        printf("\n %d * %d = %d", n, i, (n * i));
    }
}