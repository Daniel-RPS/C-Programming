#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int temp, pressao;
    printf("Digite a temperatura em Graus Celcius: \n");
    printf("Digite a pressao em bar: \n");
    scanf("%d%d", &temp, &pressao);

    if (temp <= 16)
        printf("%d\nTemperatura muito fria para o processo.\n", temp + 273);
    else if (temp <= 36)
        printf("%d\nTemperatura ideal para o processo.\n", temp + 273);
    else if (temp <= 56)
        printf("%d\nTemperatura quente para o processo. Risco de perda do produto\n", temp + 273);
    else if (temp > 80)
        printf("%d\nParar o processo! Alta temperatura. Risco de explosao!\n", temp + 273);
    else
        printf("%d\nProcesso parado\n");

    if (pressao <= 7)
        printf("Pressao baixa\n");
    else if (pressao <= 12)
        printf("Pressao ideal\n");
    else if (pressao <= 19)
        printf("Pressao alta. Risco de perda do produto\n");
    else if (pressao > 31)
        printf("Alta pressao. Risco de explosao!\n");
    else
        printf("%d\nProcesso parado\n");

    if (temp <= 16, pressao >8 <12)
        printf("Variaveis nao compativeis. Verificar novamente\n", temp + 273);
}
