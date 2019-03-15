#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,p,x,y;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        k=i;
        for(j=1;j<=i;j++)
        printf("%d",k++);
        k-=2;
        for(j=1;j<i;j++)
            printf("%d",k--);
    printf("\n");
    }
    for(i=1;i<=n/2;i++)
    {
        m=n/2;
        for(j=1;j<=m-i;j++)
            printf(" ");
            l=(n/2)+i;
        for(j=1;j<=(n/2)+i;j++)
            printf("%2d",l++);
            l-=2;
            for(j=1;j<(n/2)+i;j++)
                printf("%2d",l--);
            printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
            printf("  ");
        p=i;
        for(j=n-1;j>=n-i;j--)
            printf("%2d",p++);
            p-=2;
            for(j=n-1;j>n-i;j--)
                printf("%2d",p--);
            printf("\n");
    }
    return 0;
}
