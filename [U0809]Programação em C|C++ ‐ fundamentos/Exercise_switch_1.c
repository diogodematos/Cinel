#include <stdlib.h>
#include <stdio.h>

/*
Request from user one number, and write by extense!
*/

int main()
{
  system("clear");
  int num;
  printf("Enter a number between 1 and 5: ");
  scanf("%d", &num);
  switch(num)
  {
    case 1:
      printf("One!\n");
      break;
    case 2:
      printf("Two!\n");
      break;
    case 3:
      printf("Three!\n");
      break;
    case 4:
      printf("Four!\n");
      break;
    case 5:
      printf("Five\n");
      break;
    default:
      printf("Number must be between 1 and 5!\n");
  }
  return (0);
}