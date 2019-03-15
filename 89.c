#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int res;

    /* Reads two strings from user */
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);


    /* Call strcmp() to compare both strings and stores result in res */
    res = strcmp(str1, str2);

    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res == -1)
    {
        printf("First string is smaller than second  ");
    }
    else
    {
        printf("First string is greater than second ");
    }

    return 0;
}
