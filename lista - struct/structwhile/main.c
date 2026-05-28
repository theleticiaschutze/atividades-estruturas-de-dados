#include <stdio.h>
#define MAX 100
//agora juntamos os vetores com o struct
typedef struct {
   int matr;
   char nome[50];
   char sexo;
   float alt;
} tAluno;

int main()
{
   int i, qtd=0, iMatr;
   tAluno vAluno[MAX];

   printf("Guardar dados dos alunos em struct com vetores no while\n\n\n");
   printf("Matricula: ");
   scanf("%d", &iMatr);

   while(iMatr != 0){
      vAluno[i].matr= iMatr;

      printf("Nome: ");
      scanf(" %[^\n]", &vAluno[qtd].nome);
      printf("Sexo: ");
      scanf(" %c", &vAluno[qtd].sexo);
      printf("Altura: ");
      scanf("%f", &vAluno[qtd].alt);

      qtd++;
      //proximo loop
      printf("Matricula:");
      scanf("%d", &iMatr);
   }

   for(i=0; i<qtd; i++) {
      printf("%d, %s, %c, %.2f.\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
   }
}
