#include <stdio.h>
#define MAX 10
//isso aqui é tipo agrupar varios vetores para uma coisa
//tipo fazer uma linha de uma tabela, e aqueles com o mesmo [i] sao do mesmo pessoa/objeto
typedef struct{
   int matr;
   char nome[50];
   char sexo;
   float altura;
} tAluno;

int main()
{
   tAluno aluno1;

   printf("Matricula: ");
   scanf("%d", &aluno1.matr);
   printf("Nome: ");
   scanf(" %[^\n]", &aluno1.nome);
   printf("Sexo: ");
   scanf(" %c", &aluno1.sexo);
   printf("Altura: ");
   scanf("%f", &aluno1.altura);

   printf("%d, %s, %c, %.2f.\n", aluno1.matr, aluno1.nome, aluno1.sexo, aluno1.altura);

}
