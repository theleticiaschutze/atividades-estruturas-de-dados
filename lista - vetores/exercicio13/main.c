#include <stdio.h>
#define MAX 100

int main()
{
   float vNum[MAX],num, media, soma=0;
   int i, ocup=0, cont=0;

   printf("13 - Pega tudo, soma, conta, divide, posiciona e conta denovo\n");

   printf("Digite seu numero: ");
   scanf("%f", &num);

   while(num!=0) {
      vNum[ocup]=num;
      ocup++;

      printf("Mais um: ");
      scanf("%f", &num);
   }

   for(i=0; i<ocup; i++){
      soma = soma + vNum[i];
   }

   media = soma / ocup;


   printf("Soma deles: %g\n", soma);
   printf("Voce digitou %d numeros\n", ocup);
   printf("A media e %.2f\n", media);

   printf("Valores maiores que a media:\n");
   for(i=0; i<ocup; i++){
      if(vNum[i]>media){
         printf("%g ", vNum[i]);
         cont++;
      }
   }

   printf("\nSao %d maior que a media\n", cont);

   return 0;
}
