#include <stdio.h>
#define MAX 10
//agora juntamos os vetores com o struct
typedef struct {
   int matr;
   char nome[50];
   char sexo;
   float alt;
} tAluno;

int main()
{
   int i, qtd;
   tAluno vAluno[MAX];

   printf("Qual a quantidade de alunos? ");
   scanf("%d", &qtd);

   for(i=0; i<qtd; i++) {
      printf("Matricula: ");
      scanf("%d", &vAluno[i].matr);
      printf("Nome: ");
      scanf(" %[^\n]", &vAluno[i].nome);
      printf("Sexo: ");
      scanf(" %c", &vAluno[i].sexo);
      printf("Altura: ");
      scanf("%f", &vAluno[i].alt);
   }

   for(i=0; i<qtd; i++) {
      printf("%d, %s, %c, %.2f.\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
   }
}
