#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  int A, B;
  printf("Digite um valor inteiro A: ");
  scanf("%d", &A);
  printf("Digite um valor inteiro B: ");
  scanf("%d", &B);
  printf("Soma: %d + %d = %d\n", A, B, A+B);
  printf("Subtração: %d - %d = %d\n", A, B, A-B);
  printf("Multiplicação: %d * %d = %d\n", A, B, A*B);
  printf("Dividendo: %d\n", A);
  printf("Divisor: %d\n", B);
  printf("Quociente: %d\n", A/B);
  printf("Resto\n: %d", A%B);
  return (0);
}