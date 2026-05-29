#include <stdio.h>
#define MAX 100

int main()
{
    float vNum[MAX],num, media, soma=0;
    int i, ocup=0, cont=0;

    printf("02 - Pega tudo, soma, conta e faz media\n");
    printf("Digite 0 para encerrar!\n\n");

    printf("Digite seu numero: ");
    scanf("%f", &num);

    while(num!=0){
        vNum[ocup]=num;
        ocup++;

        printf("Mais um: ");
        scanf("%f", &num);
    }

    for(i=0; i<ocup; i++){
        soma = soma + vNum[i];
    }

    media = soma / ocup;


    printf("\n\nRESULTADOS\n");
    printf("Soma deles:     %g\n", soma);
    printf("Voce digitou:   %d\n", ocup);
    printf("Media:          %.2f\n", media);

    for(i=0; i<ocup; i++){
        if(vNum[i]<media){
            cont++;
        }
    }

    printf("Abaixo da media: %d\n", cont);

    return 0;
}
