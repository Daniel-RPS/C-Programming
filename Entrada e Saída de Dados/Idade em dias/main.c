#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int d, m, a, idade;

    printf("Informe quantos anos voc� tem: ");
    scanf("%d", &a);

    printf("Que dia � hoje?: ");
    scanf("%d", &d);

    printf("Qual o m�s atual?: ");
    scanf("%d", &m);

    idade = (d+ (a * 365) + (m * 30));

    printf("Voc� t�m %d dias de vida", idade);

    return 0;
}
