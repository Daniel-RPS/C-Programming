#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Escreva o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Escreva o segundo n�mero: ");
    scanf("%d", &n2);

    if(n1 == n2){
        printf("N�meros iguais\n");
    }else if(n1 > n2){
        printf("O primeiro n�mero � maior\n");
    }else if(n2 > n1){
        printf("O segundo n�mero � maior\n");
    }




    return 0;
}
