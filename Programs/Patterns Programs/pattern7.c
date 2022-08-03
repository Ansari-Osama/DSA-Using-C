/*
WAP to print the following patterns.
1
2 2
3 3 3
4 4 4 4
*/

#include <stdio.h>

int main()
{
    int n;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &n);
    int row = 1;
    for (int i = 0; i < n; i++)
    {
        int column = 1;
        for (int j = 0; j < row; j++)
        {
            printf("%d  ", row);
            // column += 1;
        }
        row += 1;
        printf("\n");
    }
    return 0;
}