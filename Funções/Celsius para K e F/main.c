#include <stdio.h>
#include <stdlib.h>
float fahrenheit(float C);
float kelvin(float K);


int main()
{
    int opc;
    float C, F=0, K=0;

        printf("Convertendo temperaturas");

    do{
            printf("\nEscreva a temperatura em Celsius: \n");
            scanf("%f", &C);

        printf("\n1. Converter em Fahrenheit");
        printf("\n2. Converter em Kelvin");
        printf("\n3. Sair do programa");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &opc);

        switch(opc){
            case 1: F = fahrenheit(C);
                printf("\nO equivalente em Fahrenheit e: %.2f\n", F);break;
            case 2: K = kelvin(C);
                printf("\nO equivalente em Kelvin e: %.2f\n", K);break;
        }


    }while (opc != 3);


    return 0;

}

float fahrenheit(float C){

 float F=0;
 F = (9*C)/5 + 32;
 return F;

}

float kelvin(float C){

 float K=0;
 K = C + 273.15;
 return K;

}
