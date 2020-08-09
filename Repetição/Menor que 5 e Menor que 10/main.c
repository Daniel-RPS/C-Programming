#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;

    printf("Entre com um valor menor que 5: ");
    scanf("%d", &numero);

    while(numero < 10){
        printf("%d \n", numero);
        numero++;
    }



    return 0;
}
