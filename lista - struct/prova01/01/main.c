#include <stdio.h>
#include <math.h>
#define MAX 100

int main()
{
    float vNum[MAX];
    float num, soma=0, media, somvar=0, var, dp;
    int cont=0, i;

    printf("01 - Variancia e informacoes sobre numeros!\n");
    printf("digite os valores e digite 0 para encerrar!\n\n");

    //aqui entra o primeiro número e aí vai para o vetor
    printf("Primeiro numero: ");
    scanf("%f", &num);

    while(num!=0){
        vNum[cont] = num;
        soma = soma + num; //Faz a soma já
        cont++;

        printf("Proximo valor: ");
        scanf("%f", &num);
    }

    //media
    media = soma / cont;

    //variancia
    for (i = 0; i < cont; i++){
        somvar += pow(vNum[i] - media, 2);
    }
    var = somvar / cont;

    //desvio
    dp = sqrt(var);

    //saida
    printf("\n\nRESULTADOS\n");
    printf("Qtde:       %d\n", cont);
    printf("Soma:       %.2f\n", soma);
    printf("Media:      %.2f\n\n", media);
    printf("SomaDif:    %.2f\n", somvar);
    printf("Variancia:  %.2f\n", var);
    printf("Desv.Pad:   %.2f\n", dp);

    return 0;
}
