#include <stdio.h>
#include <locale.h> // aceita chars especificos
#include <stdlib.h>

/*
O objectivo deste exercicio e solicitar ao utilizador 
um valor em polegadas e converter em mm,
sabendo que uma polegada corresponde a 25.4 mm.
Usando 2 variaveis.
*/

int main()
{
  setlocale(LC_ALL, "Portuguese"); // aceita chars portugueses
  system("clear");
  float polegadas, mm;
  printf("Digite o valor em polegadas:");
  scanf("%f", &polegadas);
  mm = polegadas * 25.4;
  printf("%f polegadas correspondem a %.2f mm\n", polegadas, mm); //.2 significa duas casas decimais
  return (0);
}