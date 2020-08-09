#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade1, idade2, diferenca;

    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idade2);

    diferenca = idade1 - idade2;

    printf("A diferença entre a primeira idade(%d) e da segunda idade(%d) é de: %d\n", idade1, idade2, diferenca);

    return 0;
}
