#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* int main()
{
  system("clear");
  int dia;
  printf("Digite um numero entre 1 e 7: ");
  scanf("%d", &dia);
  switch(dia)
  {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda\n");
      break;
    case 3:
      printf("Terca\n");
      break;
    case 4:
      printf("Quarta\n");
      break;
    case 5:
      printf("Quinta\n");
      break;
    case 6:
      printf("Sexta\n");
      break;
    case 7:
      printf("Sabado\n");
      break;
    default:
      printf("Numero errado!\n");
  }
  return (0);
} */

int main()
{
  system("clear");
  int dia;
  srand(time(NULL));
  dia=(rand() % 7) + 1;
  switch(dia)
  {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda\n");
      break;
    case 3:
      printf("Terca\n");
      break;
    case 4:
      printf("Quarta\n");
      break;
    case 5:
      printf("Quinta\n");
      break;
    case 6:
      printf("Sexta\n");
      break;
    case 7:
      printf("Sabado\n");
      break;
    default:
      printf("Numero errado!\n");
  }
  return (0);
}