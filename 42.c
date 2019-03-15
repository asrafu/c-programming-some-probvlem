#include<stdio.h>

void main()
{
   int i,c=0,n;
   int a=0;
   int b=1;
   printf("\nEnter a number to generate fibonacci series upto nth term\n");
   scanf("%d",&n);
   printf("Fibonacci series upto %d term:-\n",n);
   while(c<=n)
   {
       printf("%d ",c);
       a=b;
       b=c;
       c=a+b;
   }
}

/*#include <stdio.h>

int main()
{
    int a, b, c, i, terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);

        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}
*/
