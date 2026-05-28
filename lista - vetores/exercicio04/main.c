#include <stdio.h>
#define MAX 100

int main()
{
   int vnum[MAX], num, i, ocup=0;

   printf("04 - Diga seus numeros e eu inverterei o disco! \n");
   printf("Numero: ");
   scanf("%d", &num);//usuario coloca o primeiro numero

   //entrada dos numeros
   while(num!=0){
      vnum[ocup] = num; //coloca a copia do num no vetor 0 que ocup=0
      ocup++; //avança para o próximo casinha do vetor

      printf("Numero: ");
      scanf("%d", &num); //pega o próximo numero até o zero
   }

   //inversão deles
   printf("Do contra: ");

   for(i=ocup-1; i>=0; i--){ //ele vai fazer o valor total do ocup -1 casa e i-- para ir de trás pra frente
      printf("%d ", vnum[i]);
   }
   return 0;
}
