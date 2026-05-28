#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];
    int junta=0, total, i;
    printf("09 - Juntando strings\n");
    printf("Me de a primeira: ");
    scanf(" %[^\n]", str1);
    printf("Me de a segunda: ");
    scanf(" %[^\n]", str2);

    total = strlen(str1) + strlen(str2);

    for(i=strlen(str1); i<total; i++){
        str1[i] = str2[junta];
        junta++;
    }
    str1[total]='\0';

    printf("\n\nRESULTADOS\n\n");
    printf("%s", str1);
    return 0;
}
