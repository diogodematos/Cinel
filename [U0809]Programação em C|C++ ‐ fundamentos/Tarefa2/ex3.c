#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  float brancos, nulos, validos, total;
  printf("Insira o total de votos brancos: ");
  scanf("%f", &brancos);
  printf("Insira o total de votos nulos: ");
  scanf("%f", &nulos);
  printf("Insira o total de votos validos: ");
  scanf("%f", &validos);
  total = brancos + nulos + validos;
  brancos /= total;
  nulos /= total;
  validos /= total;
  printf("As percentagens nestas eleicoes foram:\nVotos Brancos: %.2f%%\nVotos Nulos: %.2f%%\nVotos Validos: %.2f%%\n", (brancos*100), nulos*100, validos*100);
  return (0);
}