#include<stdio.h>
int main()
{
    int Number ,sum;
    printf("Enter the Number is :");
    scanf("%d",&Number );
    //using biwise operator LS and RS
    if(Number >>3 && Number <<3){
        sum=Number ;
         if(sum%8==0){
            printf("Yes");
        }
        else printf("NO");


    }
    return 0;
}
