#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, Soma, Subtracao;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    Soma = A + B;
    Subtracao = A - B;

    printf("Valor de A + B: %d \n", Soma);
    printf("Valor de A - B: %d \n", Subtracao);

    return 0;
}
