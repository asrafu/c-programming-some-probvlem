#include <stdio.h>

int main()
{
    int decimal_number ,i=1,k=0,remainder,octal ;

    octal = 0;


    printf("Enter any decimal number: ");
    scanf("%d", &decimal_number );




    while(decimal_number> 0)
    {
        remainder = decimal_number % 8;

        octal = (remainder  * i) + octal;

        decimal_number/= 8;

        i *= 10;
    }


    printf("Octal number = %d", octal);

    return 0;

}


/*
#include <stdio.h>
int main()
{int decimal_number,octal_number;
printf("Enter the decimal_number is :");
scanf("%d",&decimal_number);
printf("%d is decimal_number convert \n to octal_number is :%o",decimal_number,decimal_number);
return 0;}
*/
