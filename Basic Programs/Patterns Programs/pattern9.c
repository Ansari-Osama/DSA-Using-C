/*
WAP to print the following patterns.
1
2 3
3 4 5
4 5 6 7
Relation = row + column - 1
*/

#include <stdio.h>

void main()
{
    int n, count = 1;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        count = i + 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d  ", count);
            count += 1;
        }
        printf("\n");
    }
}