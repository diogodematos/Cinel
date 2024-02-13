#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("clear");
  int n, total = 0, q = 0;
  total = 0;
  do
  {
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    total += n;
    q += 1;
  }while(n != 0);
  printf("A soma dos numeros introduzidos e %d e foram introduzidos %d numeros!\n", total, q);
  return (0);
}