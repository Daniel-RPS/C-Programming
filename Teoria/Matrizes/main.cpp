#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>

using namespace std;

//Função Principal do programa
int main()
{
  //Criando uma matriz
  int matriz [2][2], i, j;

  //Passando valores
  matriz[0][0] = 1;
  matriz[0][1] = 2;
  matriz[1][0] = 3;
  matriz[1][1] = 4;

  //Lendo valores para a matriz
  for (i = 0; i < 2; i++){
  for (j = 0; j < 2; j++){
    //cout << "\ni = " << i << ", j = " << j;
        cout << matriz [i][j] << " ";

    }
    cout << "\n";
  }

  //Imprimindo valores na tela
  for (i = 0; i < 2; i++){
  for (j = 0; j < 2; j++){
        //scanf("%d", &matriz[i][j]);
        cin >> matriz [i][j];
    }
  }

   for (i = 0; i < 2; i++){
  for (j = 0; j < 2; j++){
    //cout << "\ni = " << i << ", j = " << j;
        cout << matriz [i][j] << " ";

    }
    cout << "\n";
  }

    return 0;
}
