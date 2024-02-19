#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  system("clear");
  int num;
  srand(time(NULL));
  for(int i = 0; i < 5; i++)
  {
    num = rand()%21;
    printf("The num is %d\n", num);
  }
  return (0);
}