/*
WAP to print the following patterns.
1
2 3
3 4 5
4 5 6 7
Relation = row + column - 1
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
            printf("%d  ", (row + column - 1));
            column += 1;
        }
        row += 1;
        printf("\n");
    }
    return 0;
}