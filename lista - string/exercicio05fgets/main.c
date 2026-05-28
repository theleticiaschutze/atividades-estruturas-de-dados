#include <stdio.h>

int main()
{
   char num[100];
   int zer=0, uns=0, out=0;

   printf("05 - Binario ou nao binario??\n\n");

   printf("digite: ");
   fgets(num, 100, stdin);

   num[strcspn(num, "\n")] = '\0'; //isso aqui pega o \n que pode ficar na string e tira ele!

   //verificações de zero, um e outros
   for (int i=0; i<strlen(num); i++) {
      if(num[i] == '0') {        //zero
         zer++;
      }else if(num[i] == '1') {   //um
         uns++;
      }else{                      //outros
         out++; //se ele entra aqui ele soma no val que é a validação
      }
   }

   printf("\n\n0's......: %d\n", zer);
   printf("1's......: %d\n", uns);
   printf("outros......: %d\n", out);

   //valido ou invalido
   if(out>0){
      printf("Numero binario invalido!");
   }else {
      printf("Numero binario valido!");
   }
}
