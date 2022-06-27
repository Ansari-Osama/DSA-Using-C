// WAP to Calculate Factorial of a Given Number.

#include <stdio.h>
void main()
{
    int n, factorial = 1;
    printf("\n Enter the Number whose Factorial you want to Calculate: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i; // factorial = factorial + i;
    }
    printf("\n Factorial of %d is %d", n, factorial);
}