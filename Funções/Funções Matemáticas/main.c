#include <stdio.h>
#include <stdlib.h>
void funcoes_matematica();

int main()
{
    funcoes_matematica();
}

void funcoes_matematica(){

int a, b, cambio;

    printf("Escreva um numero: ");
    scanf("%d", &a);

    b = 2;

    cambio = fmod(a,b);

    if (cambio ==0){
        printf("O numero e par");
    }else{
        printf("O numero e impar");
    }

}
