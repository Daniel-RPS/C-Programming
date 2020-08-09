#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Escreva um numero maior que 10: ");
    scanf("%d", &num);

    if (num > 10){
        printf("Este numero e maior que 10\n\n");
    }
    return 0;
}
