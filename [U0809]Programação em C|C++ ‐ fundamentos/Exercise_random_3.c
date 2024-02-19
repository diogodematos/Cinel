#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* Desenvolver o jogo do sobe e desce em C.
 
1º É sorteado um número entre 0 e 100.
 
2º O jogador dispõe de 5 tentativas para adivinhar o número sorteado.
 
3º A cada tentativa o programa informa se o número do jogador é maior, menor ou
igual.
 
4º Se for igual o programa termina, indica o nº da tentativa e dá a possibilidade
de jogar novamente.
 
5º Esgotadas as tentativas, o programa termina informando o jogador do número sorteado
e dá a hipótese de jogar novamente. */

int main()
{
  system("clear");
  int num = 0, try;
  char again;
  srand(time(NULL)); 
  do 
  {
    num = rand()%101;
    for (int i = 0; i < 5; i++)
    {
      printf("Try number %d: ", i + 1);
      scanf("%d", &try);
      if (try == num)
      {
        printf("Congratulations! You beat the game at your %d try!\n", i+1);
        break;
      }
      else
      {
        printf("Wrong! Try again!\n");
        if (try > num)
          printf("Tip: The number is less than your try!\n");
        else
          printf("Tip: The number is greater than your try!\n");
      }
    }
    while (getchar() != '\n');
    printf("Do you want play again?\n");
    scanf("%c", &again);
  }while(again == 'S' || again == 's');
  return (0);
}