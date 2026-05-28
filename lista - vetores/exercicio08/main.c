#include <stdio.h>
#define MAX 100

int main ()
{
   int vnum[MAX], num, resp, i=0, cont=0;

   printf("08 - Buscador de posicao de numero especifico\n");

   printf("Primeiro numero: ");
   scanf("%d", &num);

   while(num!=0){
      //recebe e manda pro vetor
      vnum[cont] = num;


      //prepara outro loop
      printf("Mais um: ");
      scanf("%d", &num);
      cont++;
   }

   //pega o que quer achar
   printf("\n\nBusca: ");
   scanf("%d", &resp);

   for(i=0; i<cont; i++){
      if(vnum[i]==resp){
         printf("O numero %d esta na posicao %d\n", resp, i);
      }
   }
}

