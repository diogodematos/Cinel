#include <stdlib.h>
#include <stdio.h>

/*
Solicitar ao utilizador um numero entre um e cinco e escrever
por extenso o numero!
*/

int main()
{
  system("clear");
  int num;
  printf("Digite um numero entre 1 e 5: ");
  scanf("%d", &num);
  switch(num)
  {
    case 1:
      printf("um\n");
      break;
    case 2:
      printf("dois\n");
      break;
    case 3:
      printf("tres\n");
      break;
    case 4:
      printf("quatro\n");
      break;
    case 5:
      printf("cinco\n");
      break;
    default:
      printf("numero nao compreendido entre 1 e 5\n");
  }
  return (0);
}