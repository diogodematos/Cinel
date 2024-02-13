#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  int n, nm, nM;
  for(int c=0; c < 5; c++)
  {
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (c == 0)
    {
      nm = n;
      nM = n;
    }
    if (nm > n)
      nm = n;
    if (nM < n)
      nM = n;
  }
  printf("O menor numero introduzido: %d\n", nm);
  printf("O maior numero introduzido: %d\n", nM);
  return (0);
}