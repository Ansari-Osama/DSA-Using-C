/*
WAP to print the following pattern.
A A A
B B B
C C C
*/

#include <stdio.h>

int main()
{
    int n;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = 'A' + i;
            printf("%c  ", ch);
        }
        printf("\n");
    }
    return 0;
}