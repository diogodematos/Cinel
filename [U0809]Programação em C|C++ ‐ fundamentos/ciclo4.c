#include <stdlib.h>
#include <stdio.h>

/* 
Escrever uma serie numerica de 1 a 10 com passo 1:
1, 2, 3, 4, 5...
Uma funcao com while, outra com do e outra com for.
 */

/* int main()
{
  system("clear");
  int i = 0;
  while (++i < 10)
    printf("%d, ", i);
  printf("10!\n");
  return (0);
} */

int main()
{
  system("clear");
  int i = 0;
  do
  {
    printf("%d, ", i);
  } while (++i < 10);
  printf("10!\n");
  return (0);
}

/* int main()
{
  system("clear");
  for (int i = 1; i < 10; i++)
    printf("%d, ", i);
  printf("10!\n");
  return (0);
} */