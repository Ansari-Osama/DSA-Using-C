// WAP to print the Smallest Number of Two.

#include <stdio.h>

int smallestNumber(int num1, int num2)
{
    if (num1 < num2)
        return num1;
    else if (num2 < num1)
        return num2;
    else if (num1 == num2)
        return printf("\n Both the Numbers are Equals");
    return 0;
}

int main()
{
    int num1, num2, small;
    printf("\n Enter the Two Numbers: ");
    scanf("%d %d", &num1, &num2);
    small = smallestNumber(num1, num2);
    printf("\n The Smallest Number is %d", small);
    return 0;
}