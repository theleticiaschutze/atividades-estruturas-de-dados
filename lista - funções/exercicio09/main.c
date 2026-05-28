#include <stdio.h>

int primo(int n) {
   int i, cont=1;
   for(i=1; i<=n; i++) {
      if(n % i==0) {
         cont++;
      }
   }
   //se a contagem de divisores for 2, é primo
   if(cont==2) {
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
