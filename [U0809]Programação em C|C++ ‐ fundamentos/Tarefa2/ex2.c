#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  float minutos;

  printf("Digite quantos minutos estudou por dia: ");
  scanf("%f", &minutos);
  minutos /= 60;
  minutos *= 90;
  printf("No fim de 90 dias, o aluno estudou %.2f horas\n", minutos);
  return (0);
}