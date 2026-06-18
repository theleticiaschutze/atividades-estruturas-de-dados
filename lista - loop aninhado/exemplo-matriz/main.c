#include <stdio.h>
#include <stdlib.h>

void print_vetor(int v[], int qtd)
{
   for(int i=0; i<qtd; i++) {
      printf("%d ", v[i]);
   }
   printf("\n");
}

int main()
{
   int v[]= {5,4,3,2,1}; //já declarado para usar, se deixa o [] vazio ele conta quantos decarou, n tem limite
   int i, j, qtd;
   int trocas=0, ifs=0;
   int tmp;

   qtd = sizeof(v) / sizeof(v[0]); //pega o tamanhos dos bits e divide pelo tamaho de um

   print_vetor(v, qtd);

   for(j=0; j < qtd; j++) {
      for(i=0; i<qtd-1-j; i++) { //qtd-1 para ele não fazer o i++ numa casa que não existe no vetor, e como o j sobe e cada vez o ultimo fica pronto aí posso diminuir ele.
         ifs++;
         if(v[i] > v[i+1]) {
            trocas++;
            tmp = v[i];
            v[i] = v[i+1];
            v[i+1] = tmp;
         }
      }
   }
   print_vetor(v, qtd);
   printf("\nifs     = %d\n", ifs);
   printf("trocas  = %d\n", trocas);

   return 0;
}
