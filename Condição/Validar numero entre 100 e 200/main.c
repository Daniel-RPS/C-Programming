#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("Escreva um número: ");
    scanf("%f", &num);

    if (num >= 100 && num <= 200){
        printf("Numero entre 100 e 200\n\n");
    }


    return 0;
}
