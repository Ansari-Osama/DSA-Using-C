/*
WAP to print the following pattern.
1 2 3
4 5 6
7 8 9
*/

#include <stdio.h>

int main()
{
    int row, col, count = 1;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &row);
    printf("\n Enter the Number of Columns: ");
    scanf("%d", &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d \t", count);
            count += 1;
        }
        printf("\n");
    }
    return 0;
}