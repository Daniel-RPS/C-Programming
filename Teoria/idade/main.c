#include <stdio.h>
#include <stdlib.h>

int main()
{


int dias, meses, anos, Idade;

printf("Informe a quantidade de anos (inteiros): ");
scanf("%d", &anos);

printf("\n\nInforme a quantidade de meses: ");
scanf("%d", &meses);

printf("\n\nInforme a quantidade de dias: ");
scanf("%d", &dias);

Idade = (dias+(anos*365)+(meses*30));

printf("\n\n\n\tA QUANTIDADE DE DIAS EH: %d\n\n", Idade);
}
