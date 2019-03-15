/*#include <stdio.h>
#include <string.h>

int main()
{
   char arr[100];

   printf("Enter a string to reverse\n");
   gets(arr);

   strrev(arr);

   printf("Reverse of the string is \n %s \n", arr);

   return 0;
}
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int j,i;
    char str[100];
    printf("Enter String\n");
    gets(str);
    printf("\nString in Reverse Order\n");
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            for(j=i-1;j>=0;j--)         //Loop starts from last char and decrements upto 0th char
                printf("%c",str[j]);
            printf(" ");
        }
        i++;
    }
}
