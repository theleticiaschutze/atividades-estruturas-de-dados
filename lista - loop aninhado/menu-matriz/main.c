#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define MAX 100
typedef struct {
   int matr;
   char nome[50];
   char sexo;
   float alt;
} tAluno;

void firula(int i)
{
   if(i%4==0) printf("-");
   if(i%4==1) printf("\\");
   if(i%4==2) printf("|");
   if(i%4==3) printf("/");
   Sleep(100); //esse "demora" carregar
   printf("\b");
}

int lerArquivo(tAluno * vAluno)
{
   char filename[] = "alunos.csv";
   int qtd = 0;
   printf("Carregando o arquivo...\n");
   FILE * file = fopen(filename, "r");

   if(file==NULL) {
      printf("Erro ao abrir o arquivo!");
      return 0; //pois se der erro ele der erro para abrir ele nem grava;
   }

   while(fscanf(file, "%d;%[^;];%[^;];%f\n", &vAluno[qtd].matr, &vAluno[qtd].nome, &vAluno[qtd].sexo, &vAluno[qtd].alt)==4) {
      printf("#");
      Sleep(100);
      qtd++;
   }
   printf("\n\nForam encontrado %d registros", qtd);
   Sleep(500);
   fclose(file);
   return qtd;
}
void gravarArquivo(tAluno vAluno[], int qtd)
{
   printf("Gerando arquivo CSV...\n");
   char filename[] = "alunos.csv";
   //criamos o *file que é um ponteiro que se der certo o csv ele retorna o ponteiro com info
   FILE *file = fopen(filename, "w");  //o fopen abre um arquivo, o primeiro é o nome do arquivo, o segundo "" com w é de write de que vai escrever.
   if(file==NULL) {
      printf("Erro ao criar o arquivo para gravacao!");
      return; //pois se der erro ele der erro para abrir ele nem grava;
   }
   for(int i = 0; i < qtd; i++) {
      //fprint grava dentro do arquivo, e o file - é o ponteiro que colocamos
      fprintf(file, "%d;%s;%c;%f\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
      //separados por ; pois , pode ter no meio de uma string
      firula(i);
   }
   fclose(file); //fecha o arquivo! ele fica salvo na mesma pasta desse executável no pc!
   printf("Arquivo salvo com sucesso!\n");
   return;

}
int peganumero()
{
   int op;
   system("cls");
   printf("CADASTRO DE ALUNOS\n");
   printf("[0] - Sair\n");
   printf("[1] - Inclusao\n");
   printf("[2] - Listagem\n");
   printf("[3] - Pesquisa\n");
   printf("[4] - Ordenar\n");
   printf("[5] - Excluir\n");
   printf("[6] - Editar\n");
   printf("qual seu operador? ");
   scanf("%d", &op);
   return op;
}

void meuStrToUpper(char *str)
{
   for (int i=0; i<strlen(str); i++) {
      if(str[i]>='a' && str[i]<='z') {
         str[i] -= 32;
      }
   }
}


int getMaxMatricula(tAluno vAluno[], int qtd)
{
   int max;
   for(int i=0; i<qtd; i++) {
      if(vAluno[i]>max) {
         max = vAluno[i];
      }
   }

   return max;
}

int main()
{
   int op, qtd=0, i=0, j=0, encontrados=0;
   tAluno vAluno[MAX];
   char pesq[MAX];
   tAluno tmp;
   char  nNome[50]="", nAlt[50]="", nSexo='\n';
   int maior, busc;

   qtd = lerArquivo(vAluno);

   do {
      op = peganumero();

      switch(op) {

      case 0:
         printf("Saindoo...\n");
         gravarArquivo(vAluno, qtd);
         break;
      case 1:
         printf("\n------- INCLUSAO -------\n");

         vAluno[qtd].matr = getMaxMatricula(vAluno, qtd);
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
      case 4 :
         for(j=0; j<qtd; j++) {
            for(i=0; i< qtd-1-j; i++) {

               if(strcmp(vAluno[i].nome, vAluno[i+1].nome)>0) {
                  tmp = vAluno[i];
                  vAluno[i] = vAluno[i+1];
                  vAluno[i+1] = tmp;
               }
            }
         }
         printf("Lista ordenada com sucesso!\n");
         break;
      case 5:
         printf("\n------- EXCLUINDO ------\n");

         printf("Qual matricula sera exluida? ");
         scanf("%d", &busc);

         for(i=0; i<qtd; i++) {
            if(vAluno[i].matr!=busc) {
               vAluno[j] = vAluno[i];
               j++;
            }
         }
         qtd = j;
         break;
      case 6:
         printf("\n------- EDITANDO ------\n");

         printf("Qual matricula sera editada? ");
         scanf("%d", &busc);

         for(i=0; i<qtd; i++) {
            if(vAluno[i].matr == busc) {
               printf("+------+----------------------+-----+--------+\n");
               printf("| Matr | Nome                 | Sex | Altura |\n");
               printf("+------+----------------------+-----+--------+\n");
               printf("| %4d | %-20s |  %c  | %6.2f |\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);

               printf("\nPara nao editar apenas tecle enter!\n\n\n");

               //novo nome
               printf("Nome: ");
               scanf(" %[^\n]", nNome);
               meuStrToUpper(nNome);
               if (strcmp nNome, "")==0) {
                  printf("Nome vazio!")
               }
               else {

                  vAluno[i].nome = nNome;
               }

               //novo sexo
               printf("Sexo: ");
               scanf(" %c", nSexo);
               if (strcmp nSexo, "")==0) {
               printf("Sexo vazio!")
               }
               else {

                  vAluno[i].sexo = nSexo;
               }

               //nova altura
               printf("Altura: ");
               scanf(" %[^\n]", nAlt);
               if (strcmp nAlt, "")==0) {
               printf("Altura vazia!")
               }
               else {
                  vAluno[i].alt = itof(nAlt);
               }
            }
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
