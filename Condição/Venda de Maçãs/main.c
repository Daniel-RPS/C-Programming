#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade_macas;
    float valor_compra;

    printf("Quantidade de macas? ");
    scanf("%d", &quantidade_macas);

    if(quantidade_macas >= 12){
        valor_compra = quantidade_macas * 1;
    }else{
        valor_compra = quantidade_macas * 1.3;
    }

    printf("O valor da compra de macas eh %.2f para %d macas", valor_compra, quantidade_macas);

    return 0;
}
