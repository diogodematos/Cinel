#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  int da,ma,aa,dn,mn,an,idade;
  printf("Digite o dia de nascimento: ");
  scanf("%d", &dn);
  printf("Digite o mes de nascimento: ");
  scanf("%d", &mn);
  printf("Digite o ano de nascimento: ");
  scanf("%d", &an);
  printf("Digite o dia de atual: ");
  scanf("%d", &da);
  printf("Digite o mes de atual: ");
  scanf("%d", &ma);
  printf("Digite o ano de atual: ");
  scanf("%d", &aa);
  idade = aa-an;
  if ((ma<mn) || (ma=mn && da<dn))
    idade--;
  printf("A idade e %d\n", idade);
  return(0);
}