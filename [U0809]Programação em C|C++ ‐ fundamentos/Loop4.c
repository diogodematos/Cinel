#include <stdlib.h>
#include <stdio.h>

/* 
Write a number serie between 1 and 10:
1, 2, 3, 4, 5...
One function with while, other with for and other with do while!
 */

/* int main()
{
  system("clear");
  int i = 0;
  while (++i < 10)
    printf("%d, ", i);
  printf("10!\n");
  return (0);
} */

int main()
{
  system("clear");
  int i = 0;
  do
  {
    printf("%d, ", i);
  } while (++i < 10);
  printf("10!\n");
  return (0);
}

/* int main()
{
  system("clear");
  for (int i = 1; i < 10; i++)
    printf("%d, ", i);
  printf("10!\n");
  return (0);
} */