/*
WAP to print the following pattern.
A
B  C
D  E  F
G  H  I  J
*/

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("\n Enter the Number of Rows: ");
    scanf("%d", &n);
    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            char ch = 'A' + count;
            printf("%c  ", ch);
            count++;
            column += 1;
        }
        row += 1;
        printf("\n");
    }
}