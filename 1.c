/*#include<stdio.h>
int main()
{
    char ch;
   scanf("%c",&ch);
    if(ch>='a' &&ch<='z')
        {
        ch=ch-32;
        printf("%c",ch);

    }
    return 0;
}*/





#include<stdio.h>

#include<string.h>
void main()
{
  clrscr();
  char str[20];
  int i;
  printf("Enter the String (Enter First Name) in uppercase : ");
  scanf("%s",str);
  for(i=0;i<=strlen(str);i++)
  {
	    if(str[i]>=65 && str[i]<=92)
	    {
		str[i]=str[i]+32;
	    }
  }
  printf("\nThe String in Lowercase = %s",str);
  getch();
}

