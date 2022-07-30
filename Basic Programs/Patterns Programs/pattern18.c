/*
WAP to print the following pattern.
D
C  D
B  C  D
A  B  C  D
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
        int column = 1;
        while (column <= row)
        {
            char ch = 'A' - 1 + n - row + column;
            printf("%c  ", ch);
            column += 1;
        }
        row += 1;
        printf("\n");
    }
    return 0;
}