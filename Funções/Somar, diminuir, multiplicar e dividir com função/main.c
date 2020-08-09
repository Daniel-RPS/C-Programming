#include <stdio.h>
#include <stdlib.h>
void menu();
void somar();
void diminuir();
void multiplicar();
void dividir();

int main()
{
    menu ();
    return 0;
}

void menu(){

    int opc;

    printf("Operacoes matematicas usando funcao");

    do{
        printf("\n1. Somar");
        printf("\n2. Diminur");
        printf("\n3. Multiplicar");
        printf("\n4. Dividir");
        printf("\n5. Sair");
        printf("\nDigite a opcao desejada: ");
        scanf("%d",&opc );

        switch(opc){
            case 1: somar();break;
            case 2: diminuir();break;
            case 3: multiplicar();break;
            case 4: dividir();break;
        }


    }while(opc != 5);

}

void somar(){
    int n1, n2, soma=0;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite um numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma e: %d\n", soma);
}

void diminuir(){
    int n1, n2, subtracao=0;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite um numero: ");
    scanf("%d", &n2);

    subtracao = n1 - n2;

    printf("A subtracao e: %d\n", subtracao);
}

void multiplicar(){
    int n1, n2, multiplicacao=0;

   printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite um numero: ");
    scanf("%d", &n2);

    multiplicacao = n1 * n2;

    printf("A multiplicacao e: %d\n", multiplicacao);
}

void dividir(){
    int n1, n2, divisao=0;

   printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite um numero: ");
    scanf("%d", &n2);

    divisao = n1 / n2;

    printf("A divisao e: %d\n", divisao);
}
