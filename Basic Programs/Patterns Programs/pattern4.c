/*
WAP to print the following pattern.
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/

#include <stdio.h>

int main()
{
    int row, col;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &row);
    printf("\n Enter the Number of Columns: ");
    scanf("%d", &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = col; j > 0; j--)
        {
            printf("%d \t", j);
        }
        printf("\n");
    }
    return 0;
}