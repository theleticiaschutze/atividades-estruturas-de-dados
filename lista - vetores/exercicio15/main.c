#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void printvetor(int v[], int q){
   for(int i=0; i<q; i++){
      printf("%3d", v[i]);
   }
}

int main()
{
   int num, vetor[MAX], cont=0;
   printf("15 - So quero entre esseeeees\n\n\n");

   //aqui entra o primeiro número e aí vai para o vetor
   printf("Primeiro numero: ");
   scanf("%d", &num);

   while(num!=0){
      if(num<3 || num>7){ //seleciona os numeros e decide se pega ou não
         printf("----------ele nao!----------\n");
      }
      else{
         printf("----------esse sim!----------\n");
         vetor[cont] = num;
         cont++;
      }
      printf("Proximo valor: ");
      scanf("%d", &num);
   }

   //saida
   printf("Numeros coletados: ");
   printvetor(vetor, cont);

   return 0;
}
