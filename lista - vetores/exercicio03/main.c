#include <stdio.h>
#include <stdlib.h>
#define MAX 5
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

   //agora as saídas com as somas
   printf("Vetor 1...:");
   for(i=0; i<MAX; i++){
      printf("%3d", v1[i]); //com esse %3d ele vai ocupar o espaço de 3 digitos e vai sair um atrás do outro
   }
   printf("\nVetor 2...:");//com esse \n ele vai sair embaixo deste de cima e na mesma ordem com o %3d dentro do for
   for(i=0; i<MAX; i++){
      printf("%3d", v2[i]);
   }
   printf("\nVetor Soma:");
   for(i=0; i<MAX; i++){
      printf("%3d", v3[i]);
   }
   return 0;
}
