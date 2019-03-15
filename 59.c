#include<stdio.h>
#include<stdlib.h>
int main()
{  int n,i;
    FILE *fp;
    fp=fopen("59.txt","w");
    printf(" Enter the number ");

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    fprintf(fp," %d",i);
    fclose(fp);
    return 0;
}
