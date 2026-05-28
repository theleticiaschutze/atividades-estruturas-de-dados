#include <stdio.h>
#define MAX 100

int main ()
{
    int vnum[MAX], num, resp, busc=0, i=0, cont=0;

    printf("12 - Buscador de posicao de numero especifico (so o ultimo) com contador\n");

    printf("Primeiro numero: ");
    scanf("%d", &num);

    while(num!=0)
    {
        //recebe e manda pro vetor
        vnum[cont] = num;


        //prepara outro loop
        printf("Mais um: ");
        scanf("%d", &num);
        cont++;
    }

    //pega o que quer achar
    printf("\n\nBusca: ");
    scanf("%d", &resp);

    //igualei i a cont para fazer descrescente, e -1 para contar o zero
    i = cont - 1;

    //usando duas condções para o loop para manter o loop enquanto
    while(i>=0 && busc<1)
    {
        if(vnum[i]==resp)
        {
            printf("O numero %d esta na posicao %d do vetor\n", resp, i);
            busc++;
        }
        i--;
    }
}
