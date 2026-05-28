#include <stdio.h>

int meustrlen(char string[])
{
   int cont=0;
   while(string[cont]!='\0') {
      cont++;
   }
   return cont;
}
int main()
{
   int comp;
   char pal[50];


   printf("02 - meu strlen\n");
   printf("Coloque suas palavras que eu direi seus comprimentos\n\n");
   gets(pal);

   comp = meustrlen(pal);

   printf("O comprimento e de %d", comp);
}
