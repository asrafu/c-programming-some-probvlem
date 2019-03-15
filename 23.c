#include<stdio.h>
int main()
{
 int i,j,sum=0,n,k,f;
 printf("Enter the Number : ");
 scanf("%d",&n);
 for(i=2,j=5,k=8;i<=n;i=i+3,j=j+3,k=k+3)
 {

    sum=sum+(i*j*k);
 }
 printf("%d",sum);


    return 0;
}

