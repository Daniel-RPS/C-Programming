#include <stdio.h>

int main(){

    int numero = 50;
    int *p_numero;


    p_numero = &numero;

    printf("\nValor da variavel\n");
    printf("Dado: %d",numero);
    printf("\nDado: %d",*p_numero);

    printf("\n\nPosicao de memoria:\n");
    printf("Posicao: %p",&numero);
    printf("\nPosicao: %p",p_numero);

return 0;
}
