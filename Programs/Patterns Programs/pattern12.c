/*
WAP to print the following pattern.
A B C
A B C
A B C
*/

#include <stdio.h>
void printPattern(int n);

void main()
{
    int n;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &n);
    printPattern(n);
}

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = 'A' + j;
            printf("%c  ", ch);
        }
        printf("\n");
    }
}