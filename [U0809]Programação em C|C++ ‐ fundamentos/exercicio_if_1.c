#include <stdio.h>
#include <stdlib.h>

/*
Solicitar uma idade ao utilizador e avaliar o valor da mesma;
se o valor for inferior a 18 o programa deve informar o seguinte:
"Ainda nao pode votar" e informar quantos anos faltam para o efeito. 
Caso contrario escreve a mensagem: "Ja pode votar".
*/

int main()
{
  system("clear");
  int idade;
  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  if (idade >= 18)
    printf("Ja pode votar\n");
  else
    printf("ainda nao pode votar, apenas daqui a %d anos vai poder votar\n", 18 - idade);
  return (0);
}