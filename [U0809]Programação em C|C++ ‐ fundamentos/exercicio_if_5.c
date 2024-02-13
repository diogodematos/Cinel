#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  int da,ma,aa,dn,mn,an,idade;
  printf("Digite a data de nascimento no formato dd-mm-aaaa: ");
  scanf("%d-%d-%d", &dn, &mn, &an);
  printf("Digite a data atual no formato dd-mm-aaaa: ");
  scanf("%d-%d-%d", &da, &ma, &aa);
  if(an>aa)
    printf("O ano de nascimento nao pode ser maior que o atual\n");
  else if ((an==aa) && (mn > ma))
    printf("O mes de nascimento nao pode ser maior que o atual, visto os anos serem iguais\n");
  else if ((an==aa) && (mn == ma) && (dn > da))
    printf("O dia de nascimento nao pode ser maior que o atual, visto os anos e os meses serem iguais\n");
  else
  {
    idade = aa-an;
    if ((ma<mn) || (ma=mn && da<dn))
      idade--;
    printf("A idade e %d\n", idade);
  }
  return(0);
}