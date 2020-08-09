#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Variáveis
   int minCelular, minFixo;
   float assinatura, valorCelular, valorFixo, valorFinal;

   //Entrada
   printf("Entre com os minutos de celular: ");
   scanf("%d", &minCelular);
   printf("Entre com os minutos de fixo: ");
   scanf("%d", &minFixo);

   //Processamento
   assinatura   = 21.40;
   valorCelular = 0;
   valorFixo    = 0;

   if(minCelular > 100){
   valorCelular = (minCelular - 100) * 0.8;
   }

   valorFixo    = minFixo * 0.4;

   valorFinal = assinatura + valorCelular + valorFixo;

   //Saída
   printf("O valor da conta e: %.2f \n\n\n", valorFinal);



    return 0;
}
