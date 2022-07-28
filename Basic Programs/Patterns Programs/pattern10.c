/*
WAP to print the following pattern.
1
2 1
3 2 1
4 3 2 1
Relation = row - column + 1
*/

#include <stdio.h>

int main()
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
            count--;
        }
        printf("\n");
    }
    return 0;
}