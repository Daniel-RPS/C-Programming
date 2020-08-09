#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, cont = 0;

    printf("Escreva um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        if( n%i == 0)
            cont = cont + 1; //Conta por quantos numeros o n é divisível
    }

    if (cont == 2){ //Numeros primos são divisíveis por 1 e por ele mesmo. Caso seja divisível por mais de 2 numeros, não são primos.
        printf("O numero e primo");

    }else{
        printf("O numero nao e primo");
    }

    return 0;
}
