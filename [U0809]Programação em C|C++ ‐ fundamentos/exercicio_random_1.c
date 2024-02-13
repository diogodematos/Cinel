#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  system("clear");
  int num;
  srand(time(NULL)); // iniciar o aleatorio;
  num=(rand() % 11); // entre 0 e 10
  printf("O numero sorteado foi %d!\n", num);
  num=(rand() % 6) + 5; // entre 5 e 10
  printf("O numero sorteado foi %d!\n", num);
  num=(rand() % 71) + 30; // entre 30 e 100
  printf("O numero sorteado foi %d!\n", num);
  return (0);
}