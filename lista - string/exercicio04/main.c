#include <stdio.h>

int main()
{
   char pal[100];
   int cont=0, contv=0, contb=0;

   printf("04 - Quantos, vogais e brancos - quem sao e onde vivem\n\n");

   printf("digite: ");
   fgets(pal, 100, stdin);

   for (int i=0; i<strlen(pal); i++) {
      char l = toupper(pal[i]);
      if (l=='A'||l=='E'||l=='I'||l=='O'||l=='U') {      //conta vogal e caractere
         contv++;
         cont++;
      }
      else if(l == ' ') {           //conta espaços
         contb++;
      }
      else {                       //conta o que for caractere
         cont++;
      }
   }
   printf("%d caracteres, %d vogais e %d espacos\n", cont, contv, contb);
}
