#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
   int num, vnum[MAX], i, cont=0;
   printf("06 - Multiplos de 3\n");

   printf("Primeiro numero: ");
   scanf("%d", &num);

   while(num!=0){
      vnum[cont] = num;
      cont++;

      printf("Proximo numero: ");
      scanf("%d", &num);
   }

   printf("\n\nMultiplos de 3: ");
   for(i=0; i<cont; i++){
      if(vnum[i] % 3 == 0){
         printf("%d ", vnum[i]);
      }
   }

   return 0;
}
