// WAP to Calculate Factorial of a Given Number using Function.

#include <stdio.h>
int calculateFactorial(int);

void main()
{
    int n;
    printf("\n Enter the Number whose Factorial you want to Calculate: ");
    scanf("%d", &n);
    int fact = calculateFactorial(n);
    printf("\n Factorial of %d is %d", n, fact);
}

int calculateFactorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}