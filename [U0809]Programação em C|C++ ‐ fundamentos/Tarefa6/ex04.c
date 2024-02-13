#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  float saldo, montante;
  char movimento;
  printf("Digite o seu saldo actual: ");
  scanf("%f", &saldo);
  do
  {
    //system("clear");
    while (getchar() != '\n'); // clear the input buffer
    printf ("Digite D para debito ou C para credito ou  S para sair: ");
    scanf("%c", &movimento);
    switch(movimento)
    {
      case 'D':
        printf("Digite o montante: ");
        scanf("%f", &montante);
        saldo -= montante;
        break;
      case 'C':
        printf("Digite o montante: ");
        scanf("%f", &montante);
        saldo += montante;
        break;
      case 'S':
        break;
      default:
        printf("Movimento errado!/n");
    }
  }while(movimento != 'S');
  printf("O saldo e %.2f\n", saldo);
  return (0);
}