#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  float km, tempo, media;
  printf("Digite qunatos km percorreu: ");
  scanf("%f", &km);
  printf("Digite quanto tempo demorou em horas: ");
  scanf("%f", &tempo);
  media = km/tempo;
  printf("O carro realizou uma media horaria de %.2f\n", media);
  if (media > 120)
    printf("Excesso de velocidade\n");
  else
    printf("Velocidade ponderada\n");
  return (0);
}