#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  float horas;
  printf("Digite o numero de horas que trabalhou: ");
  scanf("%f", &horas);
  if (horas > 0 && horas < 15)
    printf("O utilizador trabalhou %.f horas logo tem a receber %.2f, pois descontou %.2f\n", horas, (horas * 15 * 0.90), (horas * 15 * 0.10));
  else if (horas >= 15)
    printf("O utilizador trabalhou %.f horas logo tem a receber %.2f, pois descontou %.2f\n", horas, (horas * 15 * 0.80), (horas * 15 * 0.20));
  else
    printf("Utilizador nao trabalhou logo tem a receber 0!\n");
  return (0);
}