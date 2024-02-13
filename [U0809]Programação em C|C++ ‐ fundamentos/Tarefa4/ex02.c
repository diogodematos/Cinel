#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  int dia;
  printf("Digite um numero entre 1 e 7: ");
  scanf("%d", &dia);
  if (dia == 1)
    printf("Domingo\n");
  else if (dia == 2)
    printf("Segunda\n");
  else if (dia == 3)
    printf("Terca\n");
  else if (dia == 4)
    printf("Quarta\n");
  else if (dia == 5)
    printf("Quinta\n");
  else if (dia == 6)
    printf("Sexta\n");
  else if (dia == 7)
    printf("Sabado\n");
  else
    printf("Numero errado!\n");
  return (0);
}