#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void printVetor(int v[]) {
   for (int i=0; i<MAX; i++) {
      printf("%2d  ", v[i]);
   }
   printf("\n");
}

int main()
{
   int v1[MAX], v2[MAX], v3[MAX];
   int i;

   printf("Vou somar os 5 primeiros com os 5 ultimos!\n");
   printf("Insira seus numeros abaixo\n");


   //entrada para v1
   for(i=0; i<MAX; i++){
      scanf("%d", &v1[i]);
   }

   //agora para o v2
   for(i=0; i<MAX; i++){
      scanf("%d", &v2[i]);
   }
   for(i=0; i<MAX; i++){
      v3[i] = v2[i] + v1[i];
   }

   //impressão com função
   printVetor(v1);
   printVetor(v2);
   printVetor(v3);

   return 0;
}
