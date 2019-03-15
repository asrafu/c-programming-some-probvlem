#include <stdio.h>
#include <stdlib.h>
void main()
{
 double fno,sno,*ptr1=&fno,*ptr2=&sno;


   printf(" Input the first number : ");
   scanf("%lf", ptr1);
   printf(" Input the second  number : ");
   scanf("%lf", ptr2);


 if(*ptr1>*ptr2)
 {
  printf("\n\n %lf is the maximum number.\n\n",*ptr1);
 }
 else
 {
  printf("\n\n %lf is the maximum number.\n\n",*ptr2);
 }

}
