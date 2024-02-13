#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("clear");
  char frase[9] = {'B', 'o', 'a', ' ', 'n', 'o', 'i', 't', 'e'};
  // percorrer o array para mostrar os char
  printf("Valor ascendente\n");
  for (int i = 0; i < 9; i++)
    printf("%c", frase[i]);
  printf("\n");
  // percorrer o array no sentido inverso
  printf("Valor descendente\n");
  for (int i = 8; i >= 0; i--)
     printf("%c", frase[i]);
  printf("\n");
  return(0);
}