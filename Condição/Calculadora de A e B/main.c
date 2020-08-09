#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B;
    int opcao;

    printf("Entre com o valor para A: ");
    scanf("%f", &A);

    printf("Entre com o valor para B: ");
    scanf("%f", &B);

    printf("Entre com uma operacao ( 1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao) : ");
    scanf("%d", &opcao);

    if(opcao == 1){
    printf("Soma : %.2f\n", A + B);
    }else if(opcao == 2){
    printf("Subtracao : %.2f\n", A - B);
    }else if(opcao == 3){
    printf("Multiplicacao : %.2f\n", A * B);
    }else if(opcao == 4){
    printf("Divisao : %.2f\n", A / B);
    }else if ( opcao >= 5){
    printf("Opcao nao reconhecida");
    }


    return 0;
}
