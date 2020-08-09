#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float media, nota1, nota2, nota3;

    printf("Nota 1 : ");
    scanf("%f", &nota1);

    printf("Nota 2 : ");
    scanf("%f", &nota2);

    printf("Nota 3 : ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Média final = %.1f\n\n", media);

    if (media <= 3){
        printf("REPROVADO");
    }

    if (media >= 4 && media <= 7){
        printf("REPESCAGEM");
    }

    if (media >7){
        printf("APROVADO");
    }

    return 0;
}
