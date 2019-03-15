#include<stdio.h>
#include<conio.h>
void main()
{
            int i=1,j,num,x=1;

            printf("Please Enter the Number :");
            scanf("%d",&num);
            for(i=1;i<=num;i++)
                 {
                    for(j=1;j<=i;j++)
                        {
                            if(j==1)
                              {
                                     x=1;
                                     printf("%d ",x);
                               }
                            else
                              {
                                     x=(x*(i-j+1)/(j-1));
                                     printf("%d ",x);
                               }
                       }
                                     printf("\n");
                }
                                     getch();
}
