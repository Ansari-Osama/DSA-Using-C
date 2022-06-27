// WAP to print Sum of N Natural Numbers.

#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("\n Enter the Number till you want to Find Sum: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("\n Sum from 1 to %d is %d", n, sum);
}