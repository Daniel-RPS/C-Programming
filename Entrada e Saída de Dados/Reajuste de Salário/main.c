#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float sal_atual, p_ajuste, valor_ajuste, novo_salario;

    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f", &sal_atual);

    printf("Digite quanto ser� reajustado: ");
    scanf("%f", &p_ajuste);

    valor_ajuste = (sal_atual * p_ajuste) / 100;
    novo_salario = valor_ajuste + sal_atual;

    printf("O sal�rio reajustado � de: %.2f\n", novo_salario);

    return 0;
}
