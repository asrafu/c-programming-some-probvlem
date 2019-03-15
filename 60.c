#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp;
    fp=fopen("60.txt","w");
    printf(" Enter the number ");

int row,col,i,j,n;
scanf("%d",&n);
for(row=1;row<=n;row++){

  for(col=1;col<=row;col++){
        fprintf(fp,"%d ",row);

}



fprintf(fp,"\n");
}


    return 0;

}
