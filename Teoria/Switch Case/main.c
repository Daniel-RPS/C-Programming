#include <stdio.h>
#include <stdlib.h>

void main()
{
  //Definindo Vari�veis
  int a = 2;
  char b = 'x';

  //C�digo exemplo com if
  if(a == 1){
    printf("\nOpcao escolhida: 1");
  }else if(a == 2){
    printf("\nOpcao escolhida: 2");
  }else if(a == 3){
    printf("\nOpcao escolhida: 3");
  }else{
    printf("\nOpcao invalida");
  }


  //O mesmo c�digo de cima, utilizando Switch
  switch(a){
    case 1:
        printf("\nOpcao escolhida: 1");
        break;
    case 2:
        printf("\nOpcao escolhida: 2");
        break;
    case 3:
        printf("\nOpcao escolhida: 3");
        break;
    default:
        printf("\nOpcao invalida");
        break;
  }


  //Switch com char
  switch(b){
    case 'x':
        printf("\na letra e x");
        break;
    default:
        printf("\nOpcao invalida");
        break;
  }
    system("pause");
}
