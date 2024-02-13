#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  int nasceu, atual;
  printf("Digite o ano em que nasceu: ");
  scanf("%d", &nasceu);
  printf("Digite o ano atual: ");
  scanf("%d", &atual);
  printf("O utilizador tem %d anos\n", (atual - nasceu));
  printf("O utilizador tem %d meses\n", (atual - nasceu)*12);
  printf("O utilizador tem %f dias\n", (atual - nasceu)*365.25);
  printf("O utilizador tem %d semanas\n", (atual - nasceu)*52);
  return(0);
}