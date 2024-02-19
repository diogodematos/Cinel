#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "time.h"

/* 
Function to sum 2 int of type void without arguments
 */

void  menu()
{
  system("clear");
  printf("***** M E N U *****\n");
  printf("1 - Draw numbers!\n");
  printf("2 - List the numbers!\n");
  printf("3 - Sum of the numbers!\n");
  printf("4 - Average of the numbers!\n");
  printf("5 - Highest number drawn!\n");
  printf("6 - Lowest number drawn!\n");
  printf("0 - Exit!\n");
}

void  draw(int vector[])
{
  printf("Draw of 5 numbers between 1 and 10!\n");
  srand(time(NULL));
  for(int i=0; i< 5; i++)
  {
    vector[i]=(rand()%10)+1;
  }
  printf("The numbers are drawn successfully!\n");
  printf("Wait 3 seconds!");
  sleep(3);
}

void  list(int vector[])
{
  printf("List all numbers!\n");
  for(int i=0; i< 5; i++)
  {
    printf("%d - %d\n", i+1, vector[i]);
  }
  printf("The numbers are listed successfully!\n");
  printf("Wait 3 seconds!");
  sleep(3);
}

void sum(int vector[])
{
  int sum = 0;
  printf("Sum of all numbers\n");
  for(int i=0; i< 5; i++)
  {
    sum += vector[i];
  }
  printf("The sum of all numbers is %d!\n", sum);
  printf("Wait 3 seconds!");
  sleep(3);
}

void average(int vector[])
{
  float average = 0;
  printf("average of all numbers\n");
  for(int i=0; i< 5; i++)
  {
    average += vector[i];
  }
  average /= 5;
  printf("The average of all numbers is %.2f!\n", average);
  printf("Wait 3 seconds!");
  sleep(3);
}

void  highest(int vector[])
{
  int high = 0;
  printf("The highest number!\n");
  for(int i=0; i< 5; i++)
  {
     if (high < vector[i])
      high = vector[i];
  }
  printf("The highest number is %d!\n", high);
  printf("Wait 3 seconds!");
  sleep(3);
}

void  lowest(int vector[])
{
  int low = vector[0];
  printf("The lowest number!\n");
  for(int i=0; i< 5; i++)
  {
     if (low > vector[i])
      low = vector[i];
  }
  printf("The Lowest number is %d!\n", low);
  printf("Wait 3 seconds!");
  sleep(3);
}

int main()
{
  system("clear");
  int option;
  int vector[5] = {0,0,0,0,0};
  do
  {
    menu();
    printf("Enter the option: ");
    scanf("%d", &option);
    switch(option)
    {
      case 1:
        draw(vector);
        break;
      case 2:
        list(vector);
        break;
      case 3:
        sum(vector);
        break;
      case 4:
        average(vector);
        break;
      case 5:
        highest(vector);
        break;
      case 6:
        lowest(vector);
        break;
      case 0:
        break;
      default:
        printf("Invalid option!\nWait 3 seconds!\n");
        sleep(3);
    }
  }while (option != 0);
  return (0);
}