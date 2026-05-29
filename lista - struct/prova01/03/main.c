#include <stdio.h>
#define MAX 100

int main()
{
    int vNum[MAX],num, soma=0;
    int i, ocup=0, cont=0, meio;

    printf("03 - Tirando o do meio\n");
    printf("Digite 0 para encerrar!\n\n");

    printf("Digite seu numero: ");
    scanf("%d", &num);

    while(num!=0)
    {
        vNum[ocup]= num;
        ocup++;

        printf("Mais um: ");
        scanf("%d", &num);
    }

    meio = ocup / 2;

    for(i=0; i<ocup; i++){
        if(i!=meio){
            vNum[cont]= vNum[i];
            cont++;
        }
    }

    ocup = cont;

    printf("\n\nRESULTADO\n");
    for(i=0; i<ocup; i++){
        printf("%d  ", vNum[i]);
    }

    return 0;
}
