#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int  vowel,consonants,digits,spaces;

    printf("Enter a string: ");
    gets(str);

    //assign address of str to ptr
    ptr=str;

     vowel=consonants=digits=spaces=0;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            vowel++;
       else if((*ptr>='a'&& *ptr<='z') || (*ptr>='A'&& *ptr<='Z'))
       {
           consonants++;
       }
       else if(*ptr>='0' && *ptr<='9')
        {
            digits++;
        }
          else
                {
            spaces++;
        }

        ptr++;
    }

    printf("\n\nTotal number of VOWELS: %d\nCONSONANT: %d\ndigits of %d\nspaces of %d\n",vowel,consonants,digits,spaces);
    return 0;
}
