#include <stdio.h>

int primo(int n) {
   int i, cont=0;
   //i começa em dois porque tudo divide por 1, e vai somente até a metade de n pois depois da metade nenhum numero vai dividir o n
   for(i=2; i<=n/2; i++) {
      if(n % i==0) {
         cont++;
      }
   }
   //testa somente se há alguem no meio que divide, se há não é primo
   if(cont==0) {
      return 1;
   }
   else {
      return 0;
   }

}
int main()
{
   int n;
   printf("09 - Definindo se o numero e primo\n");
   printf("Qual numero? ");
   scanf("%d", &n);

   if(primo(n)==1){
      printf("%d - primo\n", n);
   }
   else {
      printf("%d - nao primo\n", n);
   }

}
