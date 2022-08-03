/*
WAP to print the following patterns.
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>

int main()
{
    int n, count = 1;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &n);
    int row = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d  ", count);
            count++;
        }
        row += 1;
        printf("\n");
    }
    return 0;
}