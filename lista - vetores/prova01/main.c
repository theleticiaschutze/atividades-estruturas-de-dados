#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void printVetor(int v[], int q){
   for(int i=0; i<q; i++){
      printf("%3d", v[i]);
   }
   printf("\n");
}

int main()
{
   int vetor[MAX];
   int i, valor, qtd=0, soma=0;
   double media, dif, difq, acum=0;

   printf("Prova exercicio 01\n\n");

   printf("valor: ");
   scanf("%d", &valor);
   while(valor!=0){
      vetor[qtd++] = valor;   //ele vai primeiro pegar o valor e passar para o qtd atual, e o ++ depois do qtd
      soma+= valor;           //soma = soma + valor (mesma coisa)

      printf("valor: ");
      scanf("%d", &valor);
   }

   printVetor(vetor,qtd);
   media = (double)soma / qtd;
   printf("qtd     %d\n", qtd);
   printf("soma    %d\n", soma);
   printf("media   %lf\n", media);

   for(i=0; i<qtd; i++){
      dif = media - vetor [i];
      difq = dif * dif;
      acum += difq;
      printf("%lf   %lf", dif, difq);
   }
   printf("acum    %lf\n", );
   printf(" ");
   printf("");

   return 0;
}
