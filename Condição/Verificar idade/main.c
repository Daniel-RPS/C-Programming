#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Escreva a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 2){
        printf("Você é um bebê");
    }

    if (idade >= 3 && idade <= 12){
        printf("Você é uma criança");
    }

    if (idade >= 13 && idade <= 16){
        printf("Você é um adolescente");
    }

    if (idade >= 17 && idade <= 50){
        printf("Você é um adulto");
    }

    if (idade >= 51 ){
        printf("Você é um idoso");
    }
    return 0;
}
