#include <stdlib.h>
#include <stdio.h>

/* int main()
{
  system("clear");
  int bonus, idade, servico, filhos;
  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite os seus anos de servico: ");
  scanf("%d", &servico);
  printf("Digite quantos filhos tem: ");
  scanf("%d", &filhos);
  if (idade > 45)
  {
    idade -= 45;
    idade *= 5;
  }
  else
    idade = 0;
  if (servico <= 10)
    servico *= 10;
  else if (servico > 10)
    servico = ((10*10) + ((servico-10)*20)); 
  else
    servico = 0;
  if (filhos < 3)
    filhos *= 25;
  else
    filhos = 75;
  bonus = idade + filhos + servico;
  printf("Um funcionario recebera no natal um bonus de %d$!\n", bonus);
  return (0);
} */

/* Digite a sua idade: 25
Digite os seus anos de servico: 10
Digite quantos filhos tem: 4
Um funcionario com 0 anos, 100 anos de servico e 75 filhos, recebera no natal um bonus de 175$! */

int main()
{
  system("clear");
  int bonus, idade, servico, filhos;
  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite os seus anos de servico: ");
  scanf("%d", &servico);
  printf("Digite quantos filhos tem: ");
  scanf("%d", &filhos);
  if (idade > 45)
  {
    bonus = idade - 45;
    bonus *= 5;
  }
  if (servico <= 10)
    bonus += (servico * 10);
  else
    bonus += ((100) + ((servico-10)*20));
  if (filhos < 3)
    bonus += (filhos * 25);
  else
    bonus += 75;
  printf("Um funcionario com %d anos, %d anos de servico e %d filhos, recebera no natal um bonus de %d$!\n", idade, servico, filhos, bonus);
  return (0);
}