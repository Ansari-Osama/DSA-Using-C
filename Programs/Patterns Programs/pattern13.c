/*
WAP to print the following the pattern.
A B C
D E F
G H I
*/

#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = 'A' + count;
            printf("%c  ", ch);
            count++;
        }
        printf("\n");
    }
    return 0;
}