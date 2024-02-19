#include <stdio.h>
#include <locale.h> // aceita chars especificos
#include <stdlib.h>

int main()
{
  setlocale(LC_ALL, "Portuguese"); // aceita chars portugueses
  system("clear");
  // declarar uma variavel para guardar o valor da idade inicializando com 20
  int idade = 20;
  printf("A idade é %d anos.\n", idade);
  return (0);
}