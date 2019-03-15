# include <stdio.h>
int main(){
    int D1, D2, M1, M2, YEAR,i;

    for(i=1;i<=4;i++){
            printf("Enter the Date is :");
    scanf("%d%d%d%d%d", &D1,&D2,&M1,&M2,&YEAR);}
        printf(" this format DD - MM - YYYY is  : %d%d - %d%d - %d\n", D1,D2,M1,M2,YEAR);
        printf("this format  DD / MM / YYYY is  : %d%d / %d%d / %d\n", D1,D2,M1,M2,YEAR);
        printf("this format  DD  MM  YYYY is  : %d%d  %d%d  %d\n", D1,D2,M1,M2,YEAR);
        printf("this format  DD , MM , YYYY is  : %d%d , %d%d , %d\n", D1,D2,M1,M2,YEAR);


    return 0;
    }

