// WAP to Print Multiplication Table of a Given Number.

#include <stdio.h>
void main()
{
    int n;
    printf("\n Enter the Number whose Multiplication Table you want to Print: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d * %d = %d", n, i, (n * i));
    }
}