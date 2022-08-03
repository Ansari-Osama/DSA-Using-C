/*
WAP to print the following pattern.
1
2 1
3 2 1
4 3 2 1
Relation = row - column + 1
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
            printf("%d  ", row - column + 1);
            column += 1;
        }
        row += 1;
        printf("\n");
    }
    return 0;
}