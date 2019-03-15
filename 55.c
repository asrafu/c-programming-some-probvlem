#include <stdio.h>
#define MAX_SIZE 100


int main()
{
    char str[MAX_SIZE];
    int i;


    printf("Enter your text : ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string : %s",str);
    return 0;
}
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

  char str[20];
  int i;
  printf("Enter the String (Enter First Name) : ");
  scanf("%s",str);
  for(i=0;i<=strlen(str);i++)
  {
	    if(str[i]>=97 && str[i]<=122)
	    {
		str[i]=str[i]-32;
	    }
  }
  printf("\nThe String in Uppercase = %s",str);
  getch();
}
*/
