#include<stdio.h>
int main()
{
 int i,j,sum=0,n,k,f;
 printf("Enter the Number : ");
 scanf("%d",&n);
 for(i=1,j=3,k=5,f=7;i<=n;i=i+2,j=j+2,k=k+2,f=f+2)
 {

    sum=sum+(i*j*k*f);
 }
 printf("%d",sum);


    return 0;
}

