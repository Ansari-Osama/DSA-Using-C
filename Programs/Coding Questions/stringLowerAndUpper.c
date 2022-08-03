// /*
// Given a String, convert it into alternate lower case and upper case letters. First char should be lower than upper and so on.
// Note: String will only consist of lowercase and uppercase english alphabets.
// Example:
// Input: Osama
// Output: oSaMa
// */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count = 0;
    printf("\n Enter the String: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (i % 2 == 0)
        {
            if (!(str[i] >= 97 && str[i] <= 122))
            {
                str[i] += 32;
            }
        }
        else
        {
            if (!(str[i] >= 65 && str[i] <= 90))
            {
                str[i] -= 32;
            }
        }
    }
    printf("%s", str);
    return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            str[i] = tolower(str[i]);
        }
        else
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("%s", str);
}

*/