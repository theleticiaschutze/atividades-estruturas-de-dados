#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    int i, len, val, dv=0, mult=5;

    printf("07 - DV (eles vezes e dividido pra pegar o resto\n");
    printf("informe seu codigo (5 digitos): ");
    scanf("%[^\n]s", string);

    for (i=0; i < 4; i++){
        if (string[i] < '0' || string[i] > '9'){
            printf("existem caracteres invalidos\n");
            return -2;
        }

        dv += (string[i]-48)*mult;
        mult--;
    }
    dv = dv%7;
    printf("DV %d\n", dv);
}
