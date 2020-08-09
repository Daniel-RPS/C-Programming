#include <stdio.h>
#include <stdlib.h>

int main()
{

int x[5];
int i, j, aux;

 // LEITURA DO VETOR

for(i = 1; i <= 5; i++)

{

printf("Digite um numero: ");
scanf("%d", &x[i]);

}

    // ORDENANDO O VETOR

for(i = 1; i <= 5; i++)
for(j = i+1; j <= 5; j++)

{

if (x[i] > x[j])

{



        aux = x[i];
        x[i] = x[j];
        x[j] = aux;

}
}

    // IMPRESSÃO DO VALOR ORDENADO

    printf("A sequencia em ordem crescente e :  \n");
    for(i = 1 ; i <= 5; i++)
    printf("%d\n", x[i]);



system("pause");
return 0;

}
