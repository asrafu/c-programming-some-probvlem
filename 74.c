#include <stdio.h>
#include <math.h>
#define PI 3.142

double findArea(int radious)
{
   return PI * pow(radious, 2);
}

int main()
{   int r;
printf("enter a radious :");
scanf("%d",&r);
    printf("Area is %f", findArea(r));
    return 0;
}
