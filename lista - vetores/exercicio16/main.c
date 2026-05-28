#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main()
{
   //entradas de dado
   int idade, total;
   char sexo;
   //dados que vou separar e manipular
   int vidade[MAX], vsexo[MAX], i=0;
   int contf=0, totalf=0; //f
   int contm=0, totalm=0; //m
   float mediaf, mediam; //saida

   printf("16 - Idade, sexo e medias\n\n\n");
   printf("Quantas pessoas serao? (no maximo 20)");
   scanf("%d", &total);

   while(i<total) {
      printf("Idade %d:", i+1);
      scanf("%d", &idade);
      printf("Sexo %d:", i+1);
      scanf(" %c", &sexo);
      //esse testa o sexo e pega as idades para a media
      if(sexo == 'F' || sexo == 'f') { //seleciona os numeros e decide se pega ou não
         totalf += idade;
         contf++;
      }
      else if(sexo == 'M' || sexo == 'm') {
         totalm += idade;
         contm++;
      }
      i++;
   }

   mediaf = (float)totalf / contf; //tem que colocar o float ali por que int por int é int
   mediam = (float)totalm / contm;

   //saida
   printf("\n\nMedia F: %g\n", mediaf);
   printf("Media M: %g\n", mediam);

   return 0;
}
