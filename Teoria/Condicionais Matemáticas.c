#include <stdio.h>
#include <stdlib.h>

void main (){


    int a = 11, b =10, c = 5;
    char d = 'x';

    //Maior
    if(a > 2){
        printf("\n %d e maior que 2", a);
    }else{
        printf("\n a nao e maior que 2");
    }

    //Maior ou igual
    if(c >= b){
        printf("\n %d e maior ou igual %d", c, b);
    }else{
        printf("\n %d nao e maior que %d", c, b);
    }

    //Menor
    if(a < 10){
        printf("\n %d e menor que 10", a);
    }else{
        printf("\n %d nao e menor que 10", a);
    }

    //Menor ou igual
    if(a <= 10){
        printf("\n %d e menor ou igual a 10", a);
    }else{
        printf("\n %d nao e menor ou igual a 10", a);
    }

    //Diferente
    if(c != 10){
        printf("\n %d nao e 10", c);
    }else{
        printf("\n %d e 2", c);
    }

    //Com char
    if(d != 'x'){
        printf("\n %c nao e y\n", d);
    }else{
        printf("\n %c e x\n", d);
    }


    system("pause");
}
