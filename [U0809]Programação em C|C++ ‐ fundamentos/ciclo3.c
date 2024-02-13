#include <stdlib.h>
#include <stdio.h>

/* 
Escrever o texto boa noite 10 vezes!
 */

int main()
{
  system("clear");
  int i = 0;
  do
  {
    printf("Boa noite\n");
    i++;
  } while (i < 10);
  return(0);
}