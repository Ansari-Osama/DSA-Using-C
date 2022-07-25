/*
WAP to print the following pattern.
1 2 3 4
1 2 3 4
1 2 3 4
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
        for (int j = 0; j < col; j++)
        {
            printf("%d \t", (j + 1));
        }
        printf("\n");
    }
    return 0;
}