#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Vari�veis
    int VT, VV, VB, VN;
    float PV, PB, PN;

    //Entrada
    printf("Escreva o n�mero total de votos v�lidos: \n");
    scanf("%d", &VV);

    printf("Escreva o n�mero total de votos brancos: \n");
    scanf("%d", &VB);

    printf("Escreva o n�mero total de votos nulos: \n");
    scanf("%d", &VN);

    //Processamento
    VT = VB + VV + VN;
    PV = (VV*100)/VT;
    PB = (VB*100)/VT;
    PN = (VN*100)/VT;

    //Sa�da
    printf("O total de eleitores � : %d\n", VT);
    printf("A porcentagem de votos v�lidos �: %.2f\n", PV);
    printf("A porcentagem de votos brancos �: %.2f\n", PB);
    printf("A porcentagem de votos nulos �: %.2f\n", PN);

    return 0;
}
