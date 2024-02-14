#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  system("clear");
  int n[10];
  float sum = 0;
  srand(time(NULL));
  for (int i = 0; i < 10; i++)
  {
    n[i] = (rand() % 21);
    sum += n[i];
  }
  for (int i = 0; i < 10; i++)
    printf("Value in position %d is %d\n", i+1, n[i]);
  printf("\nThe sum of the numbers is %.f\n", sum);
  printf("\nThe average of the numbers is %.2f\n", sum/10);
  return(0);
}