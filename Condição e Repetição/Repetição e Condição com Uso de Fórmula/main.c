#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, i, res = 0;

    printf("Entre com um valor: ");
    scanf("%d", &valor);

    for(i = 0; i <= valor; i++)
    {
        if(i > 10){
            res = 10 * valor + 15 + i;
            printf("resultado do indice %d: %d \n\n", i, res);
        }

    }



    return 0;
}
