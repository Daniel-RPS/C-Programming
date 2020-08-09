#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Entre con um numero: ");
    scanf("%d", &numero);

    if(numero >= 0){
        printf("Positivo \n\n");
    }else{
        printf("Negativo \n\n");
    }


    return 0;
}
