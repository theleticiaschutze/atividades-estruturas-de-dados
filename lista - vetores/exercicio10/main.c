#include <stdio.h>
#define MAX 100

int main ()
{
    int vnum[MAX], num, resp, busc=0, i=0, cont=0;

    printf("10 - Buscador de posicao de numero especifico com contador e fala se não achou\n");

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

    for(i=0; i<cont; i++)
    {
        if(vnum[i]==resp)
        {
            printf("O numero %d esta na posicao %d do vetor\n", resp, i);
            busc++;
        }
    }

    //numero de vezes que achou ou se não achou
    if(busc!=0)
    {
        printf("\n\nO numero %d foi encontrado %d vezes.", resp, busc);
    }
    else
    {
        printf("O numero %d não foi encontrado", resp);
    }
