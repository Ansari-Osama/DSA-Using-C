// WAP to Calculate the Factorial of a Given Number.

#include <stdio.h>
void main()
{
    int n, i, factorial = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        factorial = factorial * i;
    }

    // i = n;
    // while (n >= 1)
    // {
    //     factorial = factorial * n;
    //     n--;
    // }
    printf("\n Factorial of %d is %d", n, factorial);
}