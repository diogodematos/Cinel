#include <stdlib.h>
#include <stdio.h>

// int main()
// {
//   system("clear");
//   float tips, total;
//   int people;
//   printf("Quantos clientes: ");
//   scanf("%d", &people);
//   total = people * 15.00;
//   tips = total * .10;
//   total += tips;
//   printf("O valor final da conta de %d clientes é %.2f, sendo que %.2f é gorjeta e %.2f do jantar!\n", people, total, tips, (total - tips));
//   return (0);
// }

// Com uma so variavel

int main()
{
  system("clear");
  int people;
  printf("Quantos clientes: ");
  scanf("%d", &people);
  printf("O valor final da conta de %d clientes é %.2f, sendo que %.2f é gorjeta e %d do jantar!\n", people, (people*15)*1.10, (people*15)*0.10, people*15);
  return (0);
}