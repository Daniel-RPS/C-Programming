#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor = 0, i = 0;

    printf("Entre com um valor: ");
    scanf("%d", &valor);

    for(i = 1; i <= valor; i++)
    {
        printf("%d \n", i);
    }


    return 0;
}
