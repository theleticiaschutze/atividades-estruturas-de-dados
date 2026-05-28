#include <stdio.h>
#define MAX 100
//isso aqui é sobre com funciona o struct, basicamente nesse codigo pegamos varios dados,
//porém eles não sao interligados, e por isso vamos aprender o struct,
//que é como se fosse um tereno para os dados, tipo uma tabela, quase um banco de dados
int main()
{
   int qtd=0;
   int    vMatr[MAX], iMatr;
   float  vAlt[MAX], fAlt;
   char   vSexo[MAX], cSExo;
   char   vNome[MAX][50], cNome;
   //o max é os vetores e o 50 é a quantidade de caracteres (é tipo uma matrix)
   //usamos no comeco das variaveis o tipo dela para idenificar, v de vetor, i de int, c de char, f de float


   printf("Guardar numero de matricula\n\n");
   printf("Matricula: ");
   scanf("%d", &iMatr);

   while(iMatr != 0){
      vMatr[qtd] = iMatr;

      printf("Nome: ");
      scanf(" %[^\n]", &vNome[qtd]);
      printf("Sexo: ");
      scanf(" %c", &vSexo[qtd]);
      printf("Altura: ");
      scanf("%f", &vAlt[qtd]);

      qtd++;
      //proximo loop
      printf("Matricula:");
      scanf("%d", &iMatr);
   }

   for(int i=0; i<qtd; i++){
      printf("%d, %s, %c, %.2f.\n", vMatr[i], vNome[i], vSexo[i], vAlt[i]);
   }

   return 0;
}
