#include <stdlib.h>
#include <stdio.h>

// int main()
// {
//   system("clear");
//   float money, ss, irs, syndicate, liquid;
//   printf("Qual é o ordenado bruto: ");
//   scanf("%f", &money);
//   ss = money * 0.115;
//   irs = money * 0.25;
//   syndicate = money * 0.005;
//   liquid = money - ss - irs - syndicate;
//   printf("Um ordenado de %.2f contribui %.2f para a SS, %.2f para o IRS, %.2f para o sindicato e no final fica com %.2f\n", money, ss, irs, syndicate, liquid);
//   return (0);
// }

// Com uma variavel

int main()
{
  system("clear");
  float money;
  printf("Qual é o ordenado bruto: ");
  scanf("%f", &money);
  printf("Um ordenado de %.2f contribui %.2f para a SS, %.2f para o IRS, %.2f para o sindicato e no final fica com %.2f\n", money, money*0.115,
    money*0.25, money*0.0005, money-(money*0.375));
  return (0);
}