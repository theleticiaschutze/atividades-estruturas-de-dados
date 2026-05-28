#include <stdio.h>
#define MAX 100

int main()
{
   int num, vnum[MAX], vmult[MAX], i, cont=0, mult, cont2=0;
   printf("07 - Multiplos do que você quiser\n");
   printf("Digite 0 para finalizar! \n\n");

   //aqui entra o primeiro número e aí vai para o
   printf("Primeiro numero: ");
   scanf("%d", &num);

   while(num!=0){
      vnum[cont] = num; //coloca para o vetor
      cont++;

      //próximo ciclo
      printf("Proximo numero: ");
      scanf("%d", &num);
   }

   //decidindo o divisor
   printf("\n\nVoce quer multiplo de que? ");
   scanf("%d", &mult);

   //aqui pego os multiplos e coloco em um outro vetor
   for(i=0; i<cont; i++){
      if(vnum[i] % mult == 0){
      vmult[cont2] = vnum[i];
      cont2++;
      }
   }

   //saída
   printf("\n\nMultiplos de %d: ", mult);
   for(i=0; i<cont2; i++){
      printf("%d ", vmult[i]);
   }

   return 0;
}
