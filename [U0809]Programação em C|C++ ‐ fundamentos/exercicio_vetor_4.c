#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  system("clear");
  int n[10];
  float soma = 0;
  srand(time(NULL));
  for (int i = 0; i < 10; i++)
  {
    n[i] = (rand() % 21);
    soma += n[i];
  }
  for (int i = 0; i < 10; i++)
    printf("Valor na posicao %d e %d\n", i+1, n[i]);
  printf("\nA soma dos numeros inseridos foi %.f\n", soma);
  printf("\nA media dos numeros e %.2f\n", soma/10);
  return(0);
}