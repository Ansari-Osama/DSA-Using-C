// WAP to Generate Multiplication Table of a Given Number.

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the Number whose Multiplication Table you want to Print: ");
    scanf("%d", &n);
    printf("Multiplication Table of %d are: \n", n);
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d \n", n, (i + 1), (n * (i + 1)));
    }
}