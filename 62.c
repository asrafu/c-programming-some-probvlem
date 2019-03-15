#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void main() {
   FILE *fp1, *fp2;
   char a;


   fp1 = fopen("newfile1.txt", "r");
   if (fp1 == NULL) {
      puts("cannot open this file");
      exit(1);
   }

   fp2 = fopen("newfile2.txt", "w");
   if (fp2 == NULL) {
      puts("Not able to open this file");
      fclose(fp1);
      exit(1);
   }

   do {
      a = getch(fp1);
      a =tolower(a);
      fputc(a, fp2);
   } while (a != EOF);


   getchar();
}

