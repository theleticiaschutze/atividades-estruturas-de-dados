#include <stdio.h>
#define MAX 7 // capacidade do vetor

//copiei do professor não estava na aula

int main()
{
   int i; // Indice / Apontador
   double nota[MAX], soma=0, media;
   char nome[MAX][50];

   // entrada dos dados
   for (i=0; i<MAX; i++) {
      printf("Informe o Nome: ");
      scanf(" %[^\n]s", &nome[i]);
      printf("Informe a Nota: ");
      scanf("%lf", &nota[i]);
      printf("\n");
   }

   // mostrar na tela e acumular (soma) os valores do vetor
   for (i=0; i<MAX; i++) {
      printf("[%d] %s %lf\n", i, nome[i], nota[i]);
      soma = soma + nota[i];
   }
   // calcular a media das temperaturas
   media = soma / MAX;
   printf("Media da Turma = %lf\n", media);

   // verificar/mostrar quais valores estao acima da media
   printf("Alunos que tiveram nota acima da media\n");
   for (i=0; i<MAX; i++) {
      if (nota[i] > media) {
         printf("[%d] %s %lf\n", i, nome[i], nota[i]);
      }
   }
}
