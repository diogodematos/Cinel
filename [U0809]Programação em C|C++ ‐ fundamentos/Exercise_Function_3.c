#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

/* 
Function to sum 2 int of type void without arguments
 */

void  sum()
{
  int x, y;
  printf("Enter the value of x: ");
  scanf("%d", &x);
  printf("Enter the value of y: ");
  scanf("%d", &y);
  printf("The sum of %d and %d is %d.\n", x, y, x+ y);
}

void  subtraction()
{
  int x, y;
  printf("Enter the value of x: ");
  scanf("%d", &x);
  printf("Enter the value of y: ");
  scanf("%d", &y);
  printf("The difference of %d and %d is %d.\n", x, y, x- y);
}

void  multiplication()
{
  int x, y;
  printf("Enter the value of x: ");
  scanf("%d", &x);
  printf("Enter the value of y: ");
  scanf("%d", &y);
  printf("The multiplication of %d and %d is %d.\n", x, y, x* y);
}

void  division()
{
  int x, y;
  printf("Enter the value of x: ");
  scanf("%d", &x);
  printf("Enter the value of y: ");
  scanf("%d", &y);
  printf("The quocient of %d and %d is %d.\n", x, y, x/ y);
}


int main()
{
  system("clear");
  char option;
  do
  {
    system("clear");
    printf("Enter what operation you want (+, -, *, / or x/X to exit): ");
    scanf("%c", &option);
    switch (option)
    {
    case '+':
    {
      sum();
      break;
    }
    case '-':
    {
      subtraction();
      break;
    }
    case '*':
    {
      multiplication();
      break;
    }
    case '/':
    {
      division();
      break;
    }
    case 'x':
    case 'X':
      break;
    default:
      printf("Invalid operation!\n");
    }
    printf("Enter to continue!\n");
  }while (option != 'x' && option != 'X');
  return (0);
}