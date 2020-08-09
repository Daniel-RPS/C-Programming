#include <stdio.h>
void binario(int n); //Opcional, apenas para formalidade
                     //da l�ngua computacional


int main()
{
    int numero;

    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }while(numero<0); //Indica que n�o funcionar� com n�meros negativos

    binario(numero);

    return 0;
}


void binario(int n){
    if(n>1)binario(n/2);

    printf("%d", n%2);

}
