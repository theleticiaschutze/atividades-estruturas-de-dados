#include <stdio.h>
#define MAX 100

void printVetor(int v[], int q){
   for(int i=0; i<q; i++){
      printf("%d ", v[i]);
   }
   printf("\n");
}

int main()
{
   int num, vnum[MAX], vmult[MAX], i, cont=0;
   int vpar[MAX], vimp[MAX], cpar=0, cimp=0;

   printf(" 14 - par impar par impar par (contando eles)\n");
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


   //decidindo par ou impar
   for(i=0; i<cont; i++){
      if(vnum[i]/2==0){ //pega par
         vpar[cpar]=vnum[i];
         cpar++;
      } else{  //pega impar
         vimp[cimp]=vnum[i];
         cimp++;
      }
   }

   //saída
   printf("Numeros pares: ");
   printVetor(vpar, cpar);
      printf("Numeros impares: ");
   printVetor(vimp, cimp);

   return 0;
}
