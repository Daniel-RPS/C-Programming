#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Definindo variáveis
    bool a = true, b = false;

    if(a) {
        printf("\nA e verdadeiro\n");
    }


    if(b) {
        printf("\nB e verdadeiro");
    }else{
        printf("\nB e falso");
    }

    if(!b){
        printf("\nB e falso");
    }

    return 0;
}
