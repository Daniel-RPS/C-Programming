#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, subtracao, multi, divi;

    printf("Calculadora 1.0\n");
    printf("Entre com dois numeros a serem processados:\n");
    scanf("%i%i", &num1, &num2);

    soma =          num1 + num2;
    subtracao =     num1 - num2;
    multi =         num1 * num2;
    divi =          num1 / num2;

    printf("A soma e: %i\n", soma);
    printf("A subtracao e: %i\n", subtracao);
    printf("A multiplicacao e: %i\n", multi);
    printf("A divisao e: %i\n", divi);

    return 0;
}
