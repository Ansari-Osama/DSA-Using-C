// WAP to Check if the Given Number is Natural Number or Not.

#include <stdio.h>

int main()
{
    int num;
    printf("\n Enter the Number to Check if it is Natural Number Or Not: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("\n %d is a Natural Number! ", num);
    }
    else
    {
        printf("\n %d is Not a Natural Number! ", num);
    }
    return 0;
}