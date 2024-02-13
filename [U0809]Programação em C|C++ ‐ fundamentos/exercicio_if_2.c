#include <stdio.h>
#include <stdlib.h>

/*
Solicitar ao utilizador uma nota entre 0 e 20. Em funcao da nota escrever
as seguintes saidas:

nota < 10 - "reprovado"
nota >=10 e nota <12 - "exame"
nota >12 - "aprovado"
*/

int main()
{
  system("clear");
  int nota;
  printf("Digite a nota entre 0 e 20: ");
  scanf("%d", &nota);
  if (nota < 0 || nota > 20)
    printf("Nota invalida! Tem de estar entre 0 e 20!\n");
  else
  {
    if (nota < 10)
      printf("Reprovado\n");
    else if (nota >= 10 && nota < 12)
      printf("Exame\n");
    else
      printf("Aprovado\n");
  }
  return (0);
}