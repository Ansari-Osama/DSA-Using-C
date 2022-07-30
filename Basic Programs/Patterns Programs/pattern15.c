/*
WAP to print the following pattern.
A
B B
C C C
*/

#include <stdio.h>

int main()
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
            char ch = 'A' + row - 1;
            printf("%c  ", ch);
            column += 1;
        }
        row += 1;
        printf("\n");
    }
    return 0;
}