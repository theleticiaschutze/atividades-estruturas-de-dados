#include <stdio.h>

int main()
{
   char pal[20];
   int i;

   printf("01 - Diga algo e farei o contrario!\n");
   printf("(no maximo 20 letras)\n\n");

   printf("digite: ");
   fgets(pal, 20, stdin);

   printf("\n\nRESULTADO\n\n");

   for (i=strlen(pal)-1; i>=0; i--) { //-1 porque ele pega x letras, mas conta com o 0, então a ultima casa é sempre -1
      printf("%c", pal[i]);
   }
}
