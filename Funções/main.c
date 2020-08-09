#include <stdio.h>
#include <stdlib.h>
void comprovar(int numero);


int main()
{
    int numero, x ;

    printf("Digite um numero: ");
    scanf("%d", &numero);


    comprovar(numero);


    /*
    x = comprovar(numero);

    if (x == 0){
        printf("\nO numero e par");
    }else{
        printf("\nO numero e impar");
    }

    */


    return 0;
}

//PARA RETORNAR SEM VALOR (VOID)

void comprovar(int numero){

    if(numero%2 == 0){
        printf("\nO numero e par");
    }else{
        printf("\nO numero e impar");
    }

    }


//PARA RETORNAR COM VALOR (INT)
/*int comprovar(int numero){
        if (numero%2==0){
            return 0;

        }
    else{
        return 1;
    }

}*/

