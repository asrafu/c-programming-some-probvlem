#include<stdio.h>
int main()
{  int n,row,col;
 scanf("%d",&n);
  for(row=n;row>=1;row--)
  {
      for(col=row;col>=1;col--)
        {printf("%d ",col%2);

      }
       printf("\n");

  }

  return 0;
}

