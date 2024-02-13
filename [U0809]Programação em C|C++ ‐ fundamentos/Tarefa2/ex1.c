#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  int A, B, temp;

  printf("Digite um valor inteiro A: ");
  scanf("%d", &A);
  printf("Digite um valor inteiro B: ");
  scanf("%d", &B);
  temp = A;
  A = B;
  B = temp;
  printf("Valores trocados:\nA:%d\nB:%d\n", A, B);
  return (0);
}