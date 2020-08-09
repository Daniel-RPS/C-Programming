#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 1;

    while(valor != 0){
        printf("Entre com um valor: ");
        scanf("%d", &valor);

        printf("O valor lido foi: %d\n\n", valor);
    }


    return 0;
}
