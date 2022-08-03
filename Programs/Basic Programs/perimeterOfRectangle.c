// WAP to Calculate Perimeter of Rectangle.Take sides, a & b, from the user.
// Formula = 2(Length + Width).

#include <stdio.h>

int calculatePerimeterOfRectangle(float length, float width);

int calculatePerimeterOfRectangle(float length, float width)
{
    float perimeter = 2 * (length + width);
    return perimeter;
}

int main()
{
    float length, width;
    printf("\n Enter the Value of Length: ");
    scanf("%f", &length);
    printf("\n Enter the Value of Width: ");
    scanf("%f", &width);
    float perimeter = calculatePerimeterOfRectangle(length, width);
    printf("\n Perimeter of a Rectangle is %f", perimeter);
    return 0;
}