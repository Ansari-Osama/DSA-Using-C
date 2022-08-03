/*
WAP to print the following pattern.
         1
      2  2
   3  3  3
4  4  4  4
*/

#include <stdio.h>

void main()
{
    int n;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &n);
    int row = 1;
    while (row <= n)
    {
        int space = n;
        while (space > row)
        {
            printf("  ");
            space -= 1;
        }
        int column = 1;
        while (column <= row)
        {
            printf("%d ", row);
            column += 1;
        }
        row += 1;
        printf("\n");
    }
}