#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, resultado;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    printf("Digite o valor de d: ");
    scanf("%d", &d);

    resultado = (a*a) + (b*b) + (c*c) + (d*d);

    printf("Quadrado de %d: %d\n", a, (a*a));
    printf("Quadrado de %d: %d\n", b, (b*b));
    printf("Quadrado de %d: %d\n", c, (c*c));
    printf("Quadrado de %d: %d\n", d, (d*d));

    printf("Resultado da soma: %d \n\n", resultado);

    return 0;
}
