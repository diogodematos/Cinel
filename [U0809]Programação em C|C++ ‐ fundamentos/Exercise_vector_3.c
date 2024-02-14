#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("clear");
  char phrase[11] = {'G', 'o', 'o', 'd', ' ', 'N', 'i', 'g', 'h', 't', '!'};
  // loop through the array to show the chars
  printf("Rising Value\n");
  for (int i = 0; i < 9; i++)
    printf("%c", phrase[i]);
  printf("\n");
  // loop through the array to show the chars in reverse
  printf("Descending Value\n");
  for (int i = 8; i >= 0; i--)
     printf("%c", phrase[i]);
  printf("\n");
  return(0);
}