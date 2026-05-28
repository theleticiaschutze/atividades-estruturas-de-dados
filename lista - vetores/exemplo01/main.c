#include <stdio.h>
#define MAX 7 // capacidade do vetor

//esse código copiei do professor - não estava na aula
int main()
{
   int i; // Indice / Apontador
   double temp[MAX] = {22.5, 24.3, 26.7, 27.9, 29.5, 31.0, 22.2}, soma=0, media;

   // mostrar na tela e acumular (soma) os valores do vetor
   for (i=0; i<MAX; i++) {
      printf("[%d] = %lf\n", i, temp[i]);
      soma = soma + temp[i];
   }
   // calcular a media das temperaturas
   media = soma / MAX;
   printf("temp media = %lf\n", media);

   // verificar/mostrar quais valores estao acima da media
   printf("Valores acima de media\n");
   for (i=0; i<MAX; i++) {
      if (temp[i] > media) {
         printf("[%d] = %lf\n", i, temp[i]);
      }
   }
}
