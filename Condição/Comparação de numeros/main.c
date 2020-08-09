#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Escreva o primeiro número: ");
    scanf("%d", &n1);

    printf("Escreva o segundo número: ");
    scanf("%d", &n2);

    if(n1 == n2){
        printf("Números iguais\n");
    }else if(n1 > n2){
        printf("O primeiro número é maior\n");
    }else if(n2 > n1){
        printf("O segundo número é maior\n");
    }




    return 0;
}
