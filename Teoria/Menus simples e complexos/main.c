#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Definindo variáveis
    int opcao;

    //Confere e valida a opcao
    while(opcao < 1 || opcao > 3){
        //interface de menu
        printf("\nEscolha uma opcao: \n");
        printf("\n1 - Opcao 1");
        printf("\n2 - Opcao 2");
        printf("\n3 - Opcao 3\n\n");

        //Lendo a opção
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("\nA opcao 1 foi escolhida");
            break;
        case 2:
            printf("\nA opcao 2 foi escolhida");
            break;
        case 3:
            printf("\nA opcao 3 foi escolhida");
            break;
        default:
            printf("\nOpcao invalida");
            break;


    }


    }


}
