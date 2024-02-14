#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("clear");
  int numbers[5] = {5, 10, 12, 8, 4};
  int i = 0;
  // write all values of array
  while(i < 5)
  {
    printf("In position %d the value is %d\n", i+1, numbers[i]);
    i++;
  }
  return(0);
}
