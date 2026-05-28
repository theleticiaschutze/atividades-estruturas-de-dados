#include <stdio.h>
#define MAX 10

int main()
{
   int vNum[MAX], num;
   int i, par=0, impar=0;
   printf("02 - par ou impar? quantos sao...\n");
   printf("Digite 10 numeros que direi!\n");

   //entradas
   for(i=0; i<MAX; i++){
      printf("Numero: ");
      scanf("%d", &num);
      vNum[i] = num;
   }

   //saidas
   for(i=0; i<MAX; i++){

      if(vNum[i]%2==0) {
         printf("%d - par\n", vNum[i]);
         par++;
      }
      else {
         printf("%d - impar\n", vNum[i]);
         impar++;
      }
   }
   printf("\nPar   %d\n", par);
   printf("Impar %d\n", impar);

   return 0;
}
