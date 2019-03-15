#include <stdio.h>
int main()
{
    int n1, n2, i, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    lcm = (n1*n2)/gcd;
    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);

    return 0;
}



/*#include <stdio.h>

int main()
{
    int i, num1, num2, max, lcm=1;
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;

    i = max;

    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm = i;
            break;
        }


        i += max;
    }

    printf("LCM of %d and %d = %d", num1, num2, lcm);

    return 0;
}
*/
