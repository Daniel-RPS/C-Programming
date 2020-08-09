#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 0, i = 0;

    printf("Entre com o valor: ");
    scanf("%d", &valor);

    for(i = 1; i <= valor; i++)
    {
        if( i >= 10 && i <= 100)
        {
            printf(">>>>>> %d \n", i);
        }
    }

    return 0;
}
