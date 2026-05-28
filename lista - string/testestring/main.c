#include <stdio.h>
#include <stdlib.h>
#DEFINE MAX 100

int main()
{
   char string[100];
   int i;

   printf("digite algo: ");
   scanf("%s", &string);

   for(i=0; i<10; i++){
      printf("%c %d\n", string[i], string[i]); //ele vai imprimir letra por letra do vetor - o %d vai mostrar o numero ASCII da char
   }
   palavra[i] = 0;

   //tirando coisas depois
   printf("antes %s\n", string);
   string[2] = 0; //coloquei um 0 na casa dois e isso apaga tudo que vem depois daquela casa do vetor, mas o 0 algarismo é diferente
   printf("depois %s\n", string);


   return 0;
}
