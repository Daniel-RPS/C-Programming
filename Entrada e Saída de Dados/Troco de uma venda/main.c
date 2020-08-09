#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Variáveis
   float valor_pago, valor_produto, troco;

   //Entrada
   printf("Entre com o valor pago: \n");
   scanf("%f", &valor_pago);

   printf("Entre com o valor do produto: \n");
   scanf("%f", &valor_produto);

   //Processamento
   troco = valor_pago - valor_produto;

   //Saída
   printf("O valor do troco e: %.2f \n\n", troco);

    return 0;
}
