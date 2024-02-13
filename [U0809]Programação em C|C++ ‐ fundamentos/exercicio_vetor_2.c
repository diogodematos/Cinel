#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("clear");
  int numeros[5];
  int posicao;
  // preencher o array por leitura
  for (int i = 0; i < 5; i++)
  {
    printf("Digite valor para a posicao %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }
  for(int i = 0; i < 5; i++)
    printf("Na posicao %d o valor e %d\n", i+1, numeros[i]);

  // mostrar um valor do array associado a uma posicao indicada pelo utilizador;
  printf("Indique a posicao cujo valor pretende visualizar(1 e 5): ");
  scanf("%d", &posicao);
  printf("O valor na posicao %d e %d\n", posicao, numeros[posicao-1]);
  return(0);
}