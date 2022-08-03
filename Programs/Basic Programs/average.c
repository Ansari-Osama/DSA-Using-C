// WAP to print the Average of 3 Numbers.

#include <stdio.h>

int calculateAverage(int num1, int num2, int num3);

int calculateAverage(int num1, int num2, int num3)
{
    return (num1 + num2 + num3) / 3;
}

int main()
{
    int a, b, c, average = 0;
    printf("\n Enter the Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    average = calculateAverage(a, b, c);
    printf("\n An Average of %d, %d and %d is %d ", a, b, c, average);
    return 0;
}