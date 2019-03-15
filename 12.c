
#include<stdio.h>
int main()
{
	int marks;


	printf(" Enter marks :");
	scanf("%d",&marks);
	if(marks>=75)
	{
		printf("Honour\n");
	}
	else if(marks >=60 && marks<75)
        printf("First division\n");
    else if (marks >=50 && marks<60)
	{
		printf("Second division");
	}
	else if(marks>=40 && marks<50)
	{
		printf("Third division");
	}
	else
	{
		printf("Fail\n");
	}

	return 0;
}
