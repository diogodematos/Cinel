#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  int idade;
  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  if(idade >= 18)
    printf("O utilizador ja tem idade para conduzir!\n");
  else
    printf("O utilizador para puder conduzir tem de esperar %d anos\n", (18-idade));
  return (0);
}