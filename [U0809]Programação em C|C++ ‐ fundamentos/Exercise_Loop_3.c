#include <stdlib.h>
#include <stdio.h>

/* 
Write "Good Night World!" 10 times using do while!
 */

int main()
{
  system("clear");
  int i = 0;
  do
  {
    printf("Good Night World!\n");
    i++;
  } while (i < 10);
  return(0);
}