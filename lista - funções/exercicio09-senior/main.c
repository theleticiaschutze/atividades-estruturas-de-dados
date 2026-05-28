#include <stdio.h>

int primo(int n) {
   int i;
   //i começa em dois porque tudo divide por 1, e vai somente até a metade de n pois depois da metade nenhum numero vai dividir o n
   for(i=2; i<=n/2; i++) {
      if(n % i==0) {
         //Aqui não tem mais o cont pois se há algum numero que divide já não é primo, não perde bit
         return 0;
      }
   }
   return 1;
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
