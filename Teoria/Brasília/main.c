#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char resp;
    printf("\nQual a capital do Brasil? \n");

    if(resp == "BRAS�LIA" || resp == "Bras�lia"){

       printf("\nParab�ns!");
       }else{
        if(resp=="bras�lia" || resp="BRAS�LIA" || resp=="Braz�lia" || resp=="braz�lia")
            printf("\n CERTO! Mas aten��o para grafia : Bras�lia ou BRAS�LIA");
            else{
                printf("\n ERRADO! Estude mais :) ")
            }
        }

    return 0;
}
