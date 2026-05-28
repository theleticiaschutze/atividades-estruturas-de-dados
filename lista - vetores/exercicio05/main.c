#include <stdio.h>
#include <math.h>
#define MAX 100
int main()
{
   int vnum[MAX], num, vquad[MAX];
   int i=0, cont=0;
   printf("05 - Ado a ado cada vetor com seu quadrado\n\n");
   printf("Digite seus numeros que depois direi os seus quadrados!\n");
   printf("primeiro valor: ");
   scanf("%d", &num);

   //colocando eles pra dentro da máquina hehe
   while(num!=0) {
      vnum[cont]= num;

      //preparando próximo ciclo
      cont++;
      printf("proximo valor: ");
      scanf("%d", &num);
   }

   printf("Os quadrados sao: ");
   //fazendo o quadrado
   for(i=0; i<cont; i++){
      vquad[i] = pow(vnum[i], 2);
      printf("%3d", vquad[i]);
   }

   return 0;
}
