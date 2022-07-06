// WAP To Take Number N from user & Output its Cube (n * n  n).

#include <stdio.h>
int cube(int n);

int cube(int n)
{
    return (n * n * n);
}

void main()
{
    int n;
    printf("\n Enter the Number whose Cube you want to Find: ");
    scanf("%d", &n);
    printf("\n Cube of %d is %d", n, cube(n));
}
