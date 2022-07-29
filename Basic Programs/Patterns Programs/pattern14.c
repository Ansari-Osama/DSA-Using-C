/*
WAP to print the following pattern.
A B C
B C D
C D E
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
        while (column <= n)
        {
            char ch = 'A' + row + column - 2;
            printf("%c  ", ch);
            column += 1;
        }
        row += 1;
        printf("\n");
    }
    return 0;
}