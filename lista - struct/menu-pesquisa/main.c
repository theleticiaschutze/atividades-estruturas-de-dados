#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int peganumero()
{
   int op;
   system("cls");
   printf("CADASTRO DE ALUNOS\n");
   printf("[0] - Sair\n");
   printf("[1] - Inclusao\n");
   printf("[2] - Listagem\n");
   printf("[3] - Pesquisa\n");
   printf("qual seu operador? ");
   scanf("%d", &op);
   return op;
}

typedef struct {
   int matr;
   char nome[50];
   char sexo;
   float alt;
} tAluno;

void meuStrToUpper(char *str)
{
   for (int i=0; i<strlen(str); i++) {
      if(str[i]>='a' && str[i]<='z') {
         str[i] -= 32;
      }
   }
}

int main()
{
   int op, qtd=0, i=0, encontrados=0;
   tAluno vAluno[MAX];
   char pesq[MAX];

   do {
      op = peganumero();

      switch(op) {

      case 0:
         printf("Saindoo...\n");
         break;
      case 1:
         printf("\n------- INCLUSAO -------\n");
         printf("Matricula: ");
         scanf("%d", &vAluno[qtd].matr);
         printf("Nome: ");
         scanf(" %[^\n]", vAluno[qtd].nome);
         meuStrToUpper(vAluno[qtd].nome);
         printf("Sexo: ");
         scanf(" %c", &vAluno[qtd].sexo);
         printf("Altura: ");
         scanf("%f", &vAluno[qtd].alt);
         qtd++;
         printf("Matricula incluida!\n");
         break;
      case 2:
         printf("\n------- LISTAGEM ------\n");
         if (qtd == 0) {
            printf("Nenhum aluno cadastrado.\n");
         }
         else {
            printf("+------+----------------------+-----+--------+\n");
            printf("| Matr | Nome                 | Sex | Altura |\n");
            printf("+------+----------------------+-----+--------+\n");

            for(i = 0; i < qtd; i++) {
               printf("| %4d | %-20s |  %c  | %6.2f |\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
            }
            printf("+------+----------------------+-----+--------+\n");
            printf("| Total: %27d Alunos  |\n", qtd);
            printf("+------+----------------------+-----+--------+\n");
         }
         break;
      case 3:
         encontrados = 0;
         printf("\n------- PESQUISA ------\n");
         printf("Para pesquisar digite parte do nome que quer encontrar!\n");
         scanf(" %[^\n]", pesq);

         meuStrToUpper(pesq);

         printf("+------+----------------------+-----+--------+\n");
         printf("| Matr | Nome                 | Sex | Altura |\n");
         printf("+------+----------------------+-----+--------+\n");

         for(i = 0; i < qtd; i++) {
            if(strstr(vAluno[i].nome, pesq) != NULL) {
               printf("| %4d | %-20s |  %c  | %6.2f |\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
               encontrados++;
            }
         }

         if(encontrados == 0) {
            printf("+------+----------------------+-----+--------+\n");
            printf("|          Nenhum aluno encontrado!          |\n");
            printf("+------+----------------------+-----+--------+\n");
         }
         else {
            printf("+------+----------------------+-----+--------+\n");
            printf("| Total: %17d Alunos Encontrados|\n", encontrados);
            printf("+------+----------------------+-----+--------+\n");
         }
         break;
      default:
         printf("Opcao invalida!\n");
         break;
      }
      if (op!=0) system("pause");
   }
   while(op != 0);

   return 0;
}
