#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("clear");
  int numeros[5] = {5, 10, 12, 8, 4};
  int i = 0;
  // escrever todos os valores do array 
  while(i < 5)
  {
    printf("Na posicao %d o valor e %d\n", i+1, numeros[i]);
    i++;
  }
  return(0);
}
