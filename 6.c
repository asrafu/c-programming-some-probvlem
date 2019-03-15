#include <stdio.h>
#include <stdlib.h>
int main()
{
float celsius, fahrenheit;
printf("\nEnter temperature in celsius: ");
scanf("%f", &celsius);
fahrenheit = (1.8) * celsius + 32;
printf("\n%f deg celsius is %f fahrenheit\n", celsius, fahrenheit);
return 0;
}


/*include <stdio.h>

#include <stdlib.h>

int main()

{

float c,f;

int i=1;

while(i){

printf("enter the value in celsius ");

scanf("%f",&c);

f=((c*(9/5))+32);

printf("%f",f);

i=0;

}

return 0;

}*/
