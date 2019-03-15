#include<stdio.h>
#include<math.h>
int main()
{
    int    number;
    double result ;
    printf("Enter the number :");
    //to get input from keyboard

    scanf("%d",&number);
    //this program use math libaray function
    result=sqrt(number);

    printf("this number : %d\n sqrt result is %lf\n",number,result);
    return 0;
}
