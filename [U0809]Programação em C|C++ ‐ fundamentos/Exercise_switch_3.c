#include <stdlib.h>
#include <stdio.h>

/*
Make a menu with 3 option and inform the customer from the chosen option!
*/

int main()
{
  system("clear");
  int option;
  printf("**** Menu ****\n");
  printf("1 - option 1\n");
  printf("2 - option 2\n");
  printf("3 - option 3\n");
  printf("Write your option: ");
  scanf("%d", &option);
  switch(option)
  {
    case 1:
      printf("You chose the first option!\n");
      break;
    case 2:
      printf("You chose the second option\n");
      break;
    case '2':
      printf("You chose the third option\n");
      break;
    default:
      printf("Didn't choose any valid option!\n");
  }
  return (0);
}