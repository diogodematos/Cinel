#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  int idade;
  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("O utilizador tem %d anos\n", idade);
  if (idade < 6)
    printf("Isento de bilhete\n");
  else if (idade >=6 && idade <= 12)
    printf("Bilhete de crianca\n");
  else if (idade >= 13 && idade <= 65)
    printf("Bilhete normal\n");
  else
    printf("Bilhete de terceira idade\n");
  return(0);
}