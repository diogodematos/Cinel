#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  system("clear");
  int num;
  srand(time(NULL)); // init random;
  num=(rand() % 11); // between 0 and 10
  printf("O numero sorteado foi %d!\n", num);
  num=(rand() % 6) + 5; // between 5 and 10
  printf("O numero sorteado foi %d!\n", num);
  num=(rand() % 71) + 30; // between 30 and 100
  printf("O numero sorteado foi %d!\n", num);
  return (0);
}