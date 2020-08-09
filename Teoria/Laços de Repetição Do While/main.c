#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 1, b = 10;

    //Primeiro confere a condição, depois repete o bloco se for necessário
    while (a <= 10){
        printf("\n%d", a);

        //incremento
        a++; //a = a + 1;

    }

    a = 20;

    //Primeiro executa uma vez, depois confere a condição
    do{
        printf("\n%d", a);

        //incremento
        a++; //a = a + 1;

    }while (a <= 10);


    return 0;
}

