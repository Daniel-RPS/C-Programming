#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main()
{

    int vetor[TAM], cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Exibir valores
    printf("\nPosicao 0: %d", vetor[0] );
    printf("\nPosicao 1: %d", vetor[1] );
    printf("\nPosicao 1: %d", vetor[2] );

    //Imprimindo vetor em um laço de repetição
    for(cont = 0; cont < TAM; cont++){
    printf("\nPosicao %d: %d", cont, vetor[cont] );
}
    //Lendo 3 valores para o veor
    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &@vetor[cont]);
    }

    //Imprimindo vetor em um laço de repetição
    for(cont = 0; cont < TAM; cont++){
    printf("\nPosicao %d: %d", cont, vetor[cont] );
}



    return 0;
}
