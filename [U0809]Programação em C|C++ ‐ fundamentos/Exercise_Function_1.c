#include "stdio.h"
#include "stdlib.h"

/* 
Function type void with 2 arguments
 */

void  sum(float x, float y)
{
  printf("The sum of %.2f and %.2f is %.2f.\n", x, y, x+y);
}

int main()
{
  system("clear");
  float x, y;
  printf("Enter the value of x: ");
  scanf("%f", &x);
  printf("Enter the value of y: ");
  scanf("%f", &y);
  sum(x, y);
  return (0);
}