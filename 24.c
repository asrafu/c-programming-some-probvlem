#include<stdio.h>
int main()
{  int n,row,col;
  int k=1;
 scanf("%d",&n);
  for(row=n;row>=1;row--)
  {
      for(col=1;col<=row;col++)
      {
          if(k%2==1){
            printf("0");
          }
          else
          {
              printf("1");
          }
          k++;

      }

             printf("\n");
      }




  return 0;
}



