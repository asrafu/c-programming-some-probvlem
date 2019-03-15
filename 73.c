#include <stdio.h>

int areaRectangle(int, int);

int main()
{
    int length, width, area;
    printf("Enter the length : ");
    scanf("%d", &length);

    printf("Enter the width : ");
    scanf("%d", &width);

    area = areaRectangle(length, width);

    printf("The area of the rectangle : %d", area);

    return 0;
}

int areaRectangle(int length, int width)
{
    return length * width;
}
