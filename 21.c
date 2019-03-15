#include<stdio.h>
int main()
{
 int i,j,sum=0,n;
 printf("Enter the Number : ");
 scanf("%d",&n);
 for(i=1,j=3;i<=n;i=i+2,j=j+2)
 {

    sum=sum+(i*j);
 }
 printf("%d",sum);


    return 0;
}
