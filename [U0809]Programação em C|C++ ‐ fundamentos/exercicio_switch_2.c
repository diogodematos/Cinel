#include <stdlib.h>
#include <stdio.h>

/*
Solicitar ao utilizador uma inicial da letra referente
ao estado civil e escrever por extenso o estado civil!
*/

int main()
{
  system("clear");
  char letra;
  printf("Escreva a letra inicial do seu estado civil: ");
  scanf("%c", &letra);
  switch(letra)
  {
    case 'C':
    case 'c':
      printf("Casado\n");
      break;
    case 'D':
    case 'd':
      printf("Divorciado\n");
      break;
    case 'S':
    case 's':
      printf("Solteiro\n");
      break;
    case 'V':
    case 'v':
      printf("Viuvo\n");
      break;
    default:
      printf("Estado Civil nao correspondente!\n");
  }
  return (0);
}