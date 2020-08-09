#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int d, m, a, idade;

    printf("Informe quantos anos você tem: ");
    scanf("%d", &a);

    printf("Que dia é hoje?: ");
    scanf("%d", &d);

    printf("Qual o mês atual?: ");
    scanf("%d", &m);

    idade = (d+ (a * 365) + (m * 30));

    printf("Você têm %d dias de vida", idade);

    return 0;
}
