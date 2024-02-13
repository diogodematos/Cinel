#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  float altura, peso, imc;
  printf("Digite a sua altura em metros: ");
  scanf("%f", &altura);
  printf("Digite o seu peso em kg: ");
  scanf("%f", &peso);
  imc = (peso/(altura*altura));
  printf("IMC = %f\n", imc);
  if (imc < 20)
    printf("Abaixo de peso\n");
  else if (imc >= 20 && imc < 24.99)
    printf("Peso normal\n");
  else if (imc >= 25 && imc < 29.99)
    printf("Acima de peso\n");
  else if (imc >= 30 && imc <= 35)
    printf("Obesidade\n");
  else
    printf("Grande Obesidade\n");
  return (0);
  
}