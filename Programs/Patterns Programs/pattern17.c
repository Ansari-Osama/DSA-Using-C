/*
WAP to print the following pattern.
A
B  C
C  D  E
D  E  F  G
*/

#include <stdio.h>

void main()
{
    int n;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &n);
    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            char ch = 'A' + row + column - 2;
            printf("%c  ", ch);
            column += 1;
        }
        row += 1;
        printf("\n");
    }
}