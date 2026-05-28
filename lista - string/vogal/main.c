#include <stdio.h>

int main()
{
   char s[10]; //colocamos só "s" para economizar espaço ali embaixo
   int cont=0;

   printf("Qual sua palavra? ");
   gets(palavra);

   for(int i=0; i<strlen(s); i++) {  //strlen(palavra) retorna quantos caracteres tem na string e ai pegar só aquele tamanho
      char l = toupper(string[i]); //traduzimos para uma letra para diminuir ainda mais o código aqui embaixo, e o toupper é para colocar tudo maiúsculo e aí testa só o maiusculo e não os dois
      if(l =='A'||l =='E'||l =='I'||l =='O'||l =='U') { //no ASCII se somar 32 tolower ou diminuir 32 ele fica toupper
         cont++;
      }
   }

   printf("Tem %d vogais", cont);

   return 0;
}
