#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, antes;

    printf("Digite um numero: \n");
    scanf("%d", &A);

    antes = A - 1;

    printf("O numero anterior ao %d equivale a: %d", A, antes);

    return 0;
}
