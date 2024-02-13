#include <stdio.h>
#include <locale.h> // aceita chars especificos
#include <stdlib.h>

/*
O objectivo deste exercicio e solicitar ao utilizador 
dois numeros inteiros e apresentar a soma dos mesmos
*/

int main()
{
  setlocale(LC_ALL, "Portuguese"); // aceita chars portugueses
  system("clear");
  int numero1, numero2, soma;
  // solicitar ao utilizador o primeiro numero
  printf("Digite o primeiro numero:");
  scanf("%d", &numero1);
  // solicitar ao utilizador o segundo numero
  printf("Digite o segundo numero:");
  scanf("%d", &numero2);
  // realizar a soma
  soma = numero1 + numero2;
  // apresentar o resultado
  printf("A soma dos dois numeros e %d\n", soma);
  return (0);
}