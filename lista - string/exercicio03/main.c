#include <stdio.h>

int main()
{
   char pal[50];

   printf("03 - TODO MUNDO GRITANDO - TUDO EM MAIUSCULA!");

   printf("digite: ");
   scanf("%s", &pal);

   for(int i = 0; i<strlen(pal); i++) {
      pal[i] = toupper(pal[i]);
   }

   printf("\n\nRESULTADO\n\n");
   printf("%s\n", pal);
}
