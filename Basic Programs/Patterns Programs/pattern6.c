/*
WAP to print the following patterns.
*
* *
* * *
* * * *
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
        for (int j = 0; j <= i; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}