#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variáveis
    float val_compra, prestacao;

    //Entrada
    printf("Entre com o valor da compra: ");
    scanf("%f", &val_compra);

    //Processamento
    prestacao = (val_compra / 5);

    //Saída
    printf("O valor de cada prestação é: %.2f \n\n", prestacao);


    return 0;
}
