#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variáveis
    int VT, VV, VB, VN;
    float PV, PB, PN;

    //Entrada
    printf("Escreva o número total de votos válidos: \n");
    scanf("%d", &VV);

    printf("Escreva o número total de votos brancos: \n");
    scanf("%d", &VB);

    printf("Escreva o número total de votos nulos: \n");
    scanf("%d", &VN);

    //Processamento
    VT = VB + VV + VN;
    PV = (VV*100)/VT;
    PB = (VB*100)/VT;
    PN = (VN*100)/VT;

    //Saída
    printf("O total de eleitores é : %d\n", VT);
    printf("A porcentagem de votos válidos é: %.2f\n", PV);
    printf("A porcentagem de votos brancos é: %.2f\n", PB);
    printf("A porcentagem de votos nulos é: %.2f\n", PN);

    return 0;
}
