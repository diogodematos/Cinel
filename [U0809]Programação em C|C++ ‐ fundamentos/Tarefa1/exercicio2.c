#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  float teste1, teste2, trabalho, final;
  printf("Nota do primeiro teste, entre 0 e 20: ");
  scanf("%f", &teste1);
  printf("Nota do segundo teste, entre 0 e 20: ");
  scanf("%f", &teste2);
  printf("Nota do trabalho, entre 0 e 20: ");
  scanf("%f", &trabalho);
  final = (teste1 * 0.35) + (teste2 * 0.35) + (trabalho * 0.30);
  printf("Nota final: %.02f\n", final);
  return (0);
}