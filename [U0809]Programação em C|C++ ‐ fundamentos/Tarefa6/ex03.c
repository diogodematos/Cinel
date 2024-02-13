#include <stdlib.h>
#include <stdio.h>

int main()
{
  system("clear");
  float r, a;
  do
  {
    printf("Digite o raio do circulo: ");
    scanf("%f", &r);
    if (r < 0)
      printf("O raio tem de ser positivo!\n");
    else 
      a = 3.14 * (r*r);
  }while(r < 0);
  printf("A area do circulo e %.2f\n", a);
  return (0);
}