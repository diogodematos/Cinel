#include <stdlib.h>
#include <stdio.h>

/* int main()
{
  system("clear");
  int km, dias, carro;
  float total;
  printf("*** Menu ***\n");
  printf("Carro 1 - Volkswagen\n");
  printf("Carro 2 - Toyota\n");
  printf("Carro 2 - Mercedes\n");
  printf("Opcao 0 - Sair\n");
  printf("Digite a carro utilizado: ");
  scanf("%d", &carro);
  switch(carro)
  {
    case 1:
      printf("Dias alugados: ");
      scanf("%d", &dias);
      printf("Km percorridos: ");
      scanf("%d", &km);
      if (km >=100)
        total = ((km - 75) * 1.20) + (dias * 30);
      else
        total = (km * 1.20) + (dias * 30);
      printf("O cliente escolheu um Volkswagen durante %d, andou %d, por isso tem a pagar %.2f!\n", dias, km, total);
      break;
    case 2:
      printf("Dias alugados: ");
      scanf("%d", &dias);
      printf("Km percorridos: ");
      scanf("%d", &km);
      if (km >=100)
        total = ((km - 75) * 1.50) + (dias * 35);
      else
        total = (km * 1.50) + (dias * 35);
      printf("O cliente escolheu um Toyota durante %d, andou %d, por isso tem a pagar %.2f!\n", dias, km, total);
      break;
    case 3:
      printf("Dias alugados: ");
      scanf("%d", &dias);
      printf("Km percorridos: ");
      scanf("%d", &km);
      if (km >=100)
        total = ((km - 75) * 2.50) + (dias * 60);
      else
        total = (km * 2.50) + (dias * 60);
      printf("O cliente escolheu um Mercedes durante %d, andou %d, por isso tem a pagar %.2f!\n", dias, km, total);
      break;
    default:
      printf("Carro escolhido invalido!\n");
  }
  return(0);
} */

int main()
{
  int km, dias, carro;
  float total;
  char  resposta;
  do
  {
    system("clear");
    printf("Dias alugados: ");
    scanf("%d", &dias);
    printf("Km percorridos: ");
    scanf("%d", &km);
    do
    {
      printf("Digite a carro utilizado: ");
      scanf("%d", &carro);
    }while(carro < 1 || carro > 3);

    if (km > 100)
      km -= 75;
    switch(carro)
    {
        case 1:
          printf("O carro escolhido foi o Volswagen!\n");
          total = (km * 1.20) + (dias * 30);
          break;
        case 2:
          printf("O carro escolhido foi o Toyota!\n");
          total = (km * 1.20) + (dias * 30);
          break;
        case 3:
          printf("O carro escolhido foi o Mercedes\n");
          total = (km * 1.20) + (dias * 30);
          break;
    }
    printf("Montante a pagar: %.2f\n", total);
    //__fpurge(stdin);
    while (getchar() != '\n'); // clear the input buffer
    printf("Digite s ou S para novo aluguer!\n");
    scanf("%c", &resposta);
  }while(resposta == 's' || resposta == 'S');
  return (0);
}