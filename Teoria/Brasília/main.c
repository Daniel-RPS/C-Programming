#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char resp;
    printf("\nQual a capital do Brasil? \n");

    if(resp == "BRASÍLIA" || resp == "Brasília"){

       printf("\nParabéns!");
       }else{
        if(resp=="brasília" || resp="BRASÍLIA" || resp=="Brazília" || resp=="brazília")
            printf("\n CERTO! Mas atenção para grafia : Brasília ou BRASÍLIA");
            else{
                printf("\n ERRADO! Estude mais :) ")
            }
        }

    return 0;
}
