#include <stdio.h>
#include <string.h>

int main()
{
   char str[50], contra[50];
   int i, cont=0, falso;
   printf("10 - palindroma - igual indo e voltando!\n");
   printf("Qual sua palavra? ");
   scanf(" %[^\n]", str);


   for (i=(strlen(str)-1); i>=0; i--) {
      contra[cont] = str[i];
      cont++;
   }

   //comparando
   for(i=0; i<cont; i++){
      if(str[i]!=contra[i]){
      falso++;
      }
   }

   //saidas
   if(falso==0) {
      printf("eh palindroma");
   }
   else {
      printf("Nao eh palindroma");
   }

   return 0;
}
