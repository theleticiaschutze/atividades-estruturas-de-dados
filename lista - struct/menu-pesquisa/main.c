#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int peganumero()
{
   int op;
   system("cls");
   //esse щ um comando do system(sistema) cmd que limpa a tela toda
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

int main()
{
   int op, qtd=0, i, encontrados;
   tAluno vAluno[MAX];
   char pesq[MAX];
   char *recorte; //ponteiro para usar no strstr


   do {
      //bloco para if/else ou switch case
      //para tratar a opção selecionada
      op = peganumero();

      switch(op) {

      case 0:
         printf("Saindoo...\n");
         break;
      case 1:
         printf("\n--- INCLUSAO ---\n");
         printf("Matricula: ");
         scanf("%d", &vAluno[qtd].matr);
         printf("Nome: ");
         scanf(" %[^\n]", vAluno[qtd].nome);
         strcpy(vAluno[qtd].nome, strupr(vAluno[qtd].nome));
         printf("Sexo: ");
         scanf(" %c", &vAluno[qtd].sexo);
         printf("Altura: ");
         scanf("%f", &vAluno[qtd].alt);
         qtd++;
         printf("Matricula incluida!\n");
         break;
      case 2:
         printf("\n--- LISTAGEM ---\n");
         if (qtd == 0) {
            printf("Nenhum aluno cadastrado.\n");
         }
         else {
            printf("+------+----------------------+-----+--------+\n");
            printf("| Matr | Nome                 | Sex | Altura |\n");
            printf("+------+----------------------+-----+--------+\n");

            for(i = 0; i < qtd; i++) { //um loop para mostrar cada aluno no vetor
               // Imprime cada linha da tabela com os dados do aluno atual
               printf("| %4d | %-20s |  %c  | %6.2f |\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
            }
            printf("+------+----------------------+-----+--------+\n");
            printf("| Total: %27d Alunos  |\n", qtd);
            printf("+------+----------------------+-----+--------+\n");
         }
         break;
      case 3:
         printf("Para perquisar digite parte do nome que quer encontrar!\n");
         scanf(" %[^\n]", pesq);
         strcpy(pesq, strupr(pesq));

         for(i=0; i<=qtd; i++){
            recorte = strstr (vAluno[i].nome, pesq);
         }

         if(recorte == NULL) {
            printf("Nenhum aluno encontrado.\n");
         }
         else {
            printf("+------+----------------------+-----+--------+\n");
            printf("| Matr | Nome                 | Sex | Altura |\n");
            printf("+------+----------------------+-----+--------+\n");

            for(i = 0; i <=qtd; i++) { //um loop para mostrar cada aluno no vetor
               if(strstr (vAluno[i].nome, pesq) != NULL)
               printf("| %4d | %-20s |  %c  | %6.2f |\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
            }

            printf("+------+----------------------+-----+--------+\n");
            printf("| Total: %17d Alunos Encontrados|\n", qtd);
            printf("+------+----------------------+-----+--------+\n");
         }
         break;
      default:
         printf("Opcao invalida!\n");
         break;
      }
      if (op!=0) system("pause");
      //o if se tiver menos de duas linhas dс para fazer assim sem chaves
      //esse dс um sinal de pausinha antes de voltar a fazer todo o switch
   }
   while(op != 0);
}
