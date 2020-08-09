#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variáveis
    int id_vendedor, cod_peca;
    float preco_unitario, qnt_vendida, total_venda, comissao;

    //Entrada de Dados
    printf("Entre com o identificador do vendedor: ");
    scanf("%d", &id_vendedor);

    printf("Entre com o código da peça: ");
    scanf("%d", &cod_peca);

    printf("Entre com o preço unitário: ");
    scanf("%f", &preco_unitario);

    printf("Entre com a quantidade: ");
    scanf("%f", &qnt_vendida);

    total_venda = preco_unitario * qnt_vendida;
    comissao = total_venda * 0.05;

    printf("O vendedor de indentificador: %d vendeu %.2f e ganhou %.2f", id_vendedor, total_venda, comissao);

    return 0;
}
