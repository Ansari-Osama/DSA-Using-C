// WAP to Check if Given Character is Digit or Not.

#include <stdio.h>

void digitOrNot(char ch);

void digitOrNot(char ch)
{
    if (ch >= 48 && ch <= 57)
    {
        printf("\n %c is a Digit. ", ch);
    }
    else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("\n %c is a Character. ", ch);
    }
    else
    {
        printf("\n %c is Neither a Digit Nor Character. ", ch);
    }
}

int main()
{
    char ch;
    printf("\n Enter the Character to Check if it is Digit or Character: ");
    scanf("%c", &ch);
    digitOrNot(ch);
    return 0;
}