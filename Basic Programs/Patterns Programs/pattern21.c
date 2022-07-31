/*
WAP to print the following pattern.
*  *  *  *
   *  *  *
      *  *
         *
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
            printf("* ");
            column -= 1;
        }
        row += 1;
        printf("\n");
    }
    return 0;
}