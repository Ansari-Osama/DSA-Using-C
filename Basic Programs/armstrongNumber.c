// WAP to check if the Given Number is Armstrong Number or Not.

#include <stdio.h>

int armstrongOrNot(int number);

int armstrongOrNot(int number)
{
    int number1 = number;
    int digit, cube, answer = 0;
    while (number != 0)
    {
        digit = number % 10;
        cube = digit * digit * digit;
        answer = answer + cube;
        number = number / 10;
    }
    if (number1 == answer)
        return 1;
    else
        return 0;
}

int main()
{
    int num, digit, cube, ans = 0;
    printf("\n Enter the Number to Check if it is Armstrong Number or Not: ");
    scanf("%d", &num);
    int armstrong = armstrongOrNot(num);
    if (armstrong == 1)
        printf("\n %d is an Armstrong Number! ", num);
    else
        printf("\n %d is Not an Armstrong Number! ", num);
    return 0;
}