/*
WAP to print the following pattern.
*  *  *  *
*  *  *
*  *
*
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
        while (column <= (n - row) + 1)
        {
            printf("* ");
            column += 1;
        }
        int space = column;
        while (space <= n)
        {
            printf("  ");
            space += 1;
        }
        row += 1;
        printf("\n");
    }
    return 0;
}