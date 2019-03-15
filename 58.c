#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

	char str[5][20], t[20];
	int i, j;
	printf("Enter any two string (name) : ");
	for(i=0; i<2; i++)
	{
		scanf("%s",str[i]);
	}
	for(i=1; i<5; i++)
	{
		for(j=1; j<5; j++)
		{
			if(strcmp(str[j-1], str[j])>0)
			{
				strcpy(t, str[j-1]);
				strcpy(str[j-1], str[j]);
				strcpy(str[j], t);
			}
		}
	}
	printf("Strings (Names) in alphabetical order : \n");
	for(i=0; i<5; i++)
	{
		printf("%s\n",str[i]);
	}
	getch();
}
