/*
WAP to print the following patter.
1  1  1  1
   2  2  2
      3  3
         4
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
        int space = 1;
        while (space < row)
        {
            printf("  ");
            space += 1;
        }
        int column = n;
        while (column >= row)
        {
            printf("%d ", row);
            column -= 1;
        }
        row += 1;
        printf("\n");
    }
    return 0;
}