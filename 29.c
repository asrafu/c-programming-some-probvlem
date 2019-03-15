#include<stdio.h>
int main()
{
    int row,col,n,m,k,p,q,i;
    printf("How many lines:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=(n-row);col++)
            printf("     ");
            m=row;
        for(col=1;col<=row;col++)
            printf("%5d",m++);
            m-=2;
            for(col=1;col<row;col++)
                printf("%5d",m--);
                printf("\n");
    }
    for(row=n-1;row>=1;row--)
        {
            for(i=1;i<=n-row;i++)
            printf("     ");
            for(p=1;p<=n-row;p++)
                q=p;
            k=row;
        for(col=n-1;col>=q;col--)
            printf("%5d",k++);
            k-=2;
            for(col=n-1;col>q;col--)
                printf("%5d",k--);
           printf("\n");
        }
    return 0;
}
