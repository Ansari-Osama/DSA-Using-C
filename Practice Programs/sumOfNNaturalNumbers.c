// WAP to Print Sum of N Natural Numbers.

#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the Number till you want Sum: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("\n The Sum from 1 to %d is %d", n, sum);
}