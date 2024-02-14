#include <stdlib.h>
#include <stdio.h>

/*
Ask the user for an initial letter referring to
to marital status and write the marital status in full!
*/

int main()
{
  system("clear");
  char letra;
  printf("Enter the initial letter referring to marital status: ");
  scanf("%c", &letra);
  switch(letra)
  {
    case 'M':
    case 'm':
      printf("Married!\n");
      break;
    case 'D':
    case 'd':
      printf("Divorced!\n");
      break;
    case 'S':
    case 's':
      printf("Single!\n");
      break;
    case 'V':
    case 'v':
      printf("Widower\n");
      break;
    default:
      printf("Marital status doesn't match!\n");
  }
  return (0);
}