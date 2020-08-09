#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    int b, h, A;

    //Entrada de valores
    printf("Escreva o valor da base: ");
    scanf("%d", &b);

    printf("Escreva o valor da altura: ");
    scanf("%d", &h);

    //Processamento
    A = (b * h);

    //Saída
    printf("O valor da area que eh a base %.1d com a altura de %.1d eh: %d metros quadrados", b,h,A);

    return 0;
}
