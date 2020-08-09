#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cont;

    //Contando até 10
    for(cont = 1; cont <= 10; cont++){
        printf("\n%d", cont);
    }

    //Tabuada
    for(cont = 1; cont <= 10; cont++){
        printf("\n 5 X %d = %d", cont, 5 * cont);
    }

    //Contando de 2 em 2
    for(cont = 0; cont <=10; cont = cont + 2){
        printf("\n%d", cont);
    }

    //Contagem Regrassiva
    for(cont = 10; cont > 0; cont--){
        printf("\n%d", cont);

    }
    return 0;
}
