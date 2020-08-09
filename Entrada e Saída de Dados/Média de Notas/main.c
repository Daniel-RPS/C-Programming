#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   //Variáveis
   float n1, n2, n3, media;
   char nome_aluno[100];

   //Entrada de valores
   printf("Entre com o nome do aluno: \n");
   scanf("%s", &nome_aluno);

   printf("Entre com a primeira nota: \n");
   scanf("%f", &n1);

   printf("Entre com a segunda nota: \n");
   scanf("%f", &n2);

   printf("Entre com a terceira nota: \n");
   scanf("%f", &n3);

   //Entrada de dados (Processamento)
   media = (n1 + n2 + n3) / 3;
   printf("Nome do aluno e: %s\n", nome_aluno);
   printf("Media final: %f\n", media);


    return 0;
}
