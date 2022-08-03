/*
WAP to print the following patter.
1  2  3  4
   2  3  4
      3  4
         4
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
        int space = row - 1;
        while (space > 0)
        {
            printf(" ");
            space -= 1;
        }
        int column = n - row + 1;
        int value = row;
        while (column > 0)
        {
            printf("%d ", value);
            value++;
            column -= 1;
        }
        row += 1;
        printf("\n");
    }
}