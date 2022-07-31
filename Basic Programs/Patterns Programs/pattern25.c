/*
WAP to print the following pattern.
         1
      2  3
   4  5  6
7  8  9  10
*/

#include <stdio.h>
void main()
{
    int n, count = 1;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &n);
    int row = 1;
    while (row <= n)
    {
        int space = 1;
        while (space <= (n - row))
        {
            printf("  ");
            space += 1;
        }
        int column = 1;
        while (column <= row)
        {
            printf("%d ", count);
            count++;
            column += 1;
        }
        row += 1;
        printf("\n");
    }
}