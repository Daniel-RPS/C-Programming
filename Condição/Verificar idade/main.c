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
        printf("Voc� � um beb�");
    }

    if (idade >= 3 && idade <= 12){
        printf("Voc� � uma crian�a");
    }

    if (idade >= 13 && idade <= 16){
        printf("Voc� � um adolescente");
    }

    if (idade >= 17 && idade <= 50){
        printf("Voc� � um adulto");
    }

    if (idade >= 51 ){
        printf("Voc� � um idoso");
    }
    return 0;
}
