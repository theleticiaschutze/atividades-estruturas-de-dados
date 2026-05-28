#include <stdio.h>

int soma(int n1, int n2) {
   int result;
   result = n1 + n2;
   return result;
}

int mult(int n1, int n2) { //pode fazer bem simplista a função
   return n1*n2; //assim retorna o resultado e fica bem mais "limpo"

int main()
{
   int s, x;
   s = soma(2,3);
   x = mult(3,6);
   printf("Soma eh %d\n", s);
   printf("Multiplicacao eh %d\n", x);
}
