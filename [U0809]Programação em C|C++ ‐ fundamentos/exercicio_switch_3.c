#include <stdlib.h>
#include <stdio.h>

/*
Desenhar um menu com 3 opcoes e informar o utilizador da opcao escolhida!
*/

int main()
{
  system("clear");
  int opcao;
  printf("**** Menu ****\n");
  printf("1 - Opcao 1\n");
  printf("2 - Opcao 2\n");
  printf("3 - Opcao 3\n");
  printf("Escreva a sua opcao: ");
  scanf("%d", &opcao);
  switch(opcao)
  {
    case 1:
      printf("Escolheu a primeira opcao\n");
      break;
    case 2:
      printf("Escolheu a segunda opcao\n");
      break;
    case '2':
      printf("Escolheu a terceira opcao\n");
      break;
    default:
      printf("Nao escolheu nenhuma opcao valida!\n");
  }
  return (0);
}