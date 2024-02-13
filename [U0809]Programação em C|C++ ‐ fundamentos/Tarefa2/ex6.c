#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  int hora, minuto;
  printf("Digite a hora atual: ");
  scanf("%d", &hora);
  printf("Digite os minutos atuais: ");
  scanf("%d", &minuto);
  printf("\nAGORA SÃO %d:%d h\n\n", hora, minuto);
  minuto += (hora * 60);
  printf("Já se passaram %d minutos desde o início do dia.\n", minuto);
  return (0);
}