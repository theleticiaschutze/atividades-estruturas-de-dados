#include <stdio.h>
#define MAX 100

int main()
{
   float vNum[MAX], num, media, soma=0;
   int i, ocup=0;


   printf("03 - Sequestrando numeros ate voce digitar zero\n");
   printf("Digite um numero: ");
   scanf("%f", &num);

   while(num!=0){
      vNum[ocup]= num;//o ocup diz qual já ta ocupada(no caso na primeira nenhuma e aí ele manda para aquela memoria o numero.
      ocup++;

      printf("Mais um: ");
      scanf("%f", &num);
   }

   printf("\nOs numeros sequestrados sao: \n");
   for(i=0; i<ocup; i++) {
      printf("[%d] = %g \n", i, vNum[i]); //o %g mostra o numero float de forma abreviada
      soma = soma + vNum[i];
   }

   printf("\nAgora vamos fazer a media! \n");
   media = soma / ocup; //tem que ser por ocup, não por i pois ocup indica os numeros digitados e i a casinha na memoria
   printf("%g dividido por %d = %g\n", soma, ocup, media);

   printf("\nE estes sao os numeros acima da media: \n");
   for(i=0; i<ocup; i++){
      if (vNum[i] > media) {
         printf("%g \n", vNum[i]);
      }
   }


   return 0;
}
