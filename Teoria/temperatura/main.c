#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int temp;
    printf("Digite a temperatura em Graus Celcius: \n");
    scanf("%d", &temp);

    if (temp <= 10)
        printf("%d\nTemperatura muito fria para o processo", temp + 273);
    else if (temp <= 20)
        printf("%d\nTemperatura ideal para o processo", temp + 273);
    else if (temp <= 30)
        printf("%d\nTemperatura quente para o processo", temp + 273);
    else if (temp > 30)
        printf("%d\nParar o processo por causa da alta temperatura. Risco de explosao!", temp + 273);
    else
         printf("%d\nProcesso parado", temp + 273);
}
