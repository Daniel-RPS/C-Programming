#include <stdio.h>
#include <stdlib.h>

//A = 10 e B = 5 ... A = 5 e B = 10

int main()
{

   //Variáveis
   int A, B, AUX;

   //Entrada de Valores
   printf("Entre com o valor de A: ");
    scanf("%d", &A);

   printf("Entre com o valor de B: ");
    scanf("%d", &B);

   //Processamento
   AUX = A;
   A = B;
   B = AUX;

   //Saída
   printf("\nO novo valor de A e: %d", A);
   printf("\nO novo valor de B e: %d", B);

    return 0;
}
