#include <stdio.h>
#include <locale.h> // aceita chars especificos
#include <stdlib.h>

/*
O objectivo deste exercicio e solicitar ao utilizador a idade em anos e apresentar no seguinte formato:

Boa noite. A sua idade e de <valor da idade> anos.
*/

int main()
{
  setlocale(LC_ALL, "Portuguese"); // aceita chars portugueses
  system("clear");
  // declarar a variavel para armenezar o valor da idade
  int idade;
  // informar o utilizador do pretendido
  printf("Digite a sua idade:");
  // solicitar a idade
  scanf("%d", &idade);  // & e um operador de endereco
  printf("Boa noite. A sua idade e de %d anos.\n", idade);
  return (0);
}