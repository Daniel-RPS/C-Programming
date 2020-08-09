#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j = 0;

    //coluna
    for(i = 0; i < 6; i++)
    {
        //linha
        for(j = 0; j < 10; j++)
    {
        printf("?");
    }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
