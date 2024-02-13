#include <stdio.h>
#include <stdlib.h>

/*
Pretende-se calcular o valor de uma multa tendo em conta a velocidade
permitida dentro de uma localidade e a velocidade de um veiculo.
Por cada km em excesso o valor e de 5$. Se o veiculo circula com 
velocidade dentro dos limites o valor da multa nao e apresentado surgindo
a seguinte mensagem: "o Veiculo circulava dentro dos limites de velocidade!".
*/


int main()
{
  system("clear");
  int velmax, velveiculo, multa;
  printf("Digite a velocidade maxima na localidade: ");
  scanf("%d", &velmax);
  printf("Digite a velocidade do veiculo: ");
  scanf("%d", &velveiculo);
  if (velveiculo > velmax)
  {
    multa = (velveiculo - velmax) * 5;
    printf("A multa a pagar e de %d\n", multa);
  }
  else
    printf("O veiculo circulava dentro dos limites\n");
  return(0);
}