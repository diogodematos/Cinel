#include <stdlib.h>
#include <stdio.h>

// Realizado para o exemplo dado no exercicio

// int main()
// {
//   system("clear");
//   float d1 = 100, d2 = 50, soma;
//   d1 += (d1 * 0.09);
//   d2 += (d2 * 0.07);
//   soma = d1 + d2;
//   printf("Valor: %.02f\n", soma);
//   return (0);
// }

//Realizado para qualquer deposito

int main()
{
  system("clear");
  float dA, dB, soma;
  printf("Digite o valor a depositar no banco A: ");
  scanf("%f", &dA);
  printf("Digite o valor a depositar no banco B: ");
  scanf("%f", &dB);
  dA += (dA * 0.09);
  dB += (dB * 0.07);
  soma = dA + dB;
  printf("Montante disponivel ao fim de um ano: %.2f\n", soma);
  return (0);
}