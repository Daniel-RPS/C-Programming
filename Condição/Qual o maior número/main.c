#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    int val1, val2;

    //Entrada de Danos
    printf("Entre com o primeiro valor: \n");
    scanf("%d", &val1);

    printf("Entre com o segundo valor: \n");
    scanf("%d", &val2);

    //Processamento
    if(val1 > val2){
        printf("Primeiro valor maior que o segundo");
    }

    if(val2 > val1){
        printf("Segundo valor maior que o primeiro");
    }


    return 0;
}
