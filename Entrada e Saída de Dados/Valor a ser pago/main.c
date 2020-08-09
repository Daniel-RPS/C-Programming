#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_kg, qnt_comprado, total;

    printf("Entre com o valor do quilo: ");
    scanf("%f", &valor_kg);

    printf("Entre com a quantidade comprada: ");
    scanf("%f", &qnt_comprado);

    total = valor_kg * qnt_comprado;

    printf("O valor total da compra: %.2f\n", total);

    return 0;
}
