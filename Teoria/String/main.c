#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Vai�veis
    char palavra[10];

    //Instru��o
    printf("Digite uma palavra: ");

    //Limpar o buffer
    setbuf(stdin, 0);

    //Ler a String
    fgets(palavra, 255, stdin);

    //Limpa as casas n�o utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprimir String
    printf("%s", palavra);

    return 0;
}
