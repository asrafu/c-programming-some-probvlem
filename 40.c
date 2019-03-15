#include<stdio.h>
int main()
{
    int chack=1,a,i;
    scanf("%d",&a);
  for(i=2;i<a;i++)
  {
      if(a%i==0)
        chack=0;
  }if(chack==1)
printf("number is prime ");
else
    printf("number is not prime ");
return 0;
}


/*#include <stdio.h>
int main()
{
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; ++i)
    {
        // condition for nonprime number
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else
    {
        if (flag == 0)
          printf("%d is a prime number.", n);
        else
          printf("%d is not a prime number.", n);
    }

    return 0;
}
*/
