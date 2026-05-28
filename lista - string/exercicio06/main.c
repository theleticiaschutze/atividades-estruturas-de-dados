#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    int i, len, val, soma=0;

    printf("informe numero (no maximo 4 digitos): ");
    scanf("%[^\n]s", string);
    len = strlen(string);
    if (len>4){
        printf("numero maior que o permitido\n");
        return -1;
    }

    for (i=0; i < len; i++){
        if (string[i] < '0' || string[i] > '9'){
            printf("existem caracteres invalidos\n");
            return -2;
        }
        val = string[i] - 48;
        soma += val;
    }
    printf("val %d\n", soma);
}


