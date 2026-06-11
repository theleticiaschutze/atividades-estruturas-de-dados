#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
   Sleep(500); //esse "demora" carregar
   printf("\b");
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
   printf("[4] - Gerar arquivo CSV\n");   printf("[5] - Carregar arqivo\n");
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

int main()
{
   int op, qtd=0, i=0, encontrados=0;
   tAluno vAluno[MAX];
   char pesq[MAX];
   char filename[] = "alunos.csv";  //fizemos como um string para utilizar no programa varias vezes
   FILE * file; //pois vamos usar em varios lugares

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
      case 4:
         printf("Gerando arquivo CSV...\n");
         //criamos o *file que é um ponteiro que se der certo o csv ele retorna o ponteiro com info
         file = fopen(filename, "w");  //o fopen abre um arquivo, o primeiro é o nome do arquivo, o segundo "" com w é de write de que vai escrever.
         if(file==NULL) {
            printf("Erro ao abrir o arquivo!");
            break; //pois se der erro ele der erro para abrir ele nem grava;
         }
         for(i = 0; i < qtd; i++) {
            if(strstr(vAluno[i].nome, pesq) != NULL) {
               //fprint grava dentro do arquivo, e o file - é o ponteiro que colocamos
               fprintf(file, "%d;%s;%c;%f\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
               //separados por ; pois , pode ter no meio de uma string
               firula(i);
            }
         }
         fclose(file); //fecha o arquivo! ele fica salvo na mesma pasta desse executável no pc!
         printf("Arquivo gerado com sucesso!\n");
         break;
      case 5:
         qtd = 0;  //pois vou usar ela para "medir"
         printf("Carregando o arquivo...\n");
         file = fopen(filename, "r");
         if(file==NULL) {
            printf("Erro ao abrir o arquivo!");
            break; //pois se der erro ele der erro para abrir ele nem grava;
         }
         // int ret = fscanf(file, "%d;%[^;];%[^;];%f\n", &vAluno[qtd].matr, &vAluno[qtd].nome, &vAluno[qtd].sexo, &vAluno[qtd].alt); //assim enquanto ele ler tais caracteres - que é as linhas gravadas ele vai sobreescrever todos os dados
         // printf("ret %d\n", ret); //usamos este para testar se estava pegando os carcateres, quando retornou 4 é pq leu as 4 variaveis
         while(fscanf(file, "%d;%[^;];%[^;];%f\n", &vAluno[qtd].matr, &vAluno[qtd].nome, &vAluno[qtd].sexo, &vAluno[qtd].alt)==4){
            printf("#");
            Sleep(50);
            qtd++;
         }
         printf("\n\nForam encontrado %d registros", qtd);
         fclose(file);
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
