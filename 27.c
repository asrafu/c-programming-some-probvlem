#include<stdio.h>
int main()
{
    int row,col,number;
    printf("Enter the Number : ");

    scanf("%d",&number);
    for(row=1;row<=number;row++)
    {
        for(col=1;col<=number-row;col++)
        printf(" ");
        for(col=1;col<=row;col++)
            printf("%d",col);
        for(col=row-1;col>=1;col--)
            printf("%d",col);
        printf("\n");
    }
}
