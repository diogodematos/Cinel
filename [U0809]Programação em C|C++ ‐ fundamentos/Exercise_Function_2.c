#include "stdio.h"
#include "stdlib.h"

/* 
Function type float with 2 arguments
 */

float  sum(float x, float y)
{
  return (x+y);
}

int main()
{
  system("clear");
  float x, y;
  printf("Enter the value of x: ");
  scanf("%f", &x);
  printf("Enter the value of y: ");
  scanf("%f", &y);
  printf("The sum of %.2f and %.2f is %.2f.\n", x, y, sum(x, y));
  return (0);
}