#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  int opcao, area, l, lmaior, lmenor, alt, base;
  printf("*** Menu ***\n");
  printf("Opcao 1 - Calculo da area do quadrado (lado * lado)\n");
  printf("Opcao 2 - Calculo da area do rectangulo (lado maior * lado menor)\n");
  printf("Opcao 3 - Calculo da area do trinagulo (Base * altura / 2)\n");
  printf("Opcao 0 - Sair\n");
  printf("Digite a opcao desejada: ");
  scanf("%d", &opcao);
  switch(opcao)
  {
    case 1:
      printf("Digite o lado do quadrado em cm: ");
      scanf("%d", &l);
      area = l * l;
      printf("A area do quadrado e %d cm2!\n", area);
      break;
    case 2:
      printf("Digite o lado maior do rectangulo em cm: ");
      scanf("%d", &lmaior);
      printf("Digite o lado menor do rectangulo em cm: ");
      scanf("%d", &lmenor);
      area = lmaior * lmenor;
      printf("A area do rectangulo e %d cm2!\n", area);
      break;
    case 3:
      printf("Digite a altura do triangulo em cm: ");
      scanf("%d", &alt);
      printf("Digite a base do triangulo em cm: ");
      scanf("%d", &base);
      area = base * alt / 2;
      printf("A area do triangulo e %d cm2!\n", area);
      break;
    case 0:
      printf("Sair do menu!\n");
      break;
    default:
      printf("Valor introduzido invalido!\n");
  }
  return(0);
}