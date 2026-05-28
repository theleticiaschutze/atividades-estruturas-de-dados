#include <stdio.h>
#include <string.h>

int main()
{
   char str1[100], str2[100];
   int i=0, tam1=0, tam2=0;
   printf("08 - tirando seu espaco\n");
   printf("Digite sua frase: ");
   scanf("%[^\n]", str1);
   tam1 = strlen(str1);

   while(i<tam1) {
      if(str1[i]!=' ') {
         str2[tam2] = str1[i];
         tam2++;
      }
      i++;
   }

   printf("\n\nRESULTADO\n\n");
   printf("%s", str2);

   return 0;
}
