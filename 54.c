#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int i, j;

    printf("Enter first line: ");
    gets(str1);
    printf("Enter second line : ");
    gets(str2);

    i=-1;
    while(str1[++i]);
    j = 0;
    while(str1[i++] = str2[j++]);

    printf("add line= %s", str1);

    return 0;
}
