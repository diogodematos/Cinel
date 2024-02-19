#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "time.h"

/* 
    Create a C program with a menu structure identical to the one presented below:
    *** Student Grades ***
    1- Gather grades
    2- Show all grades
    3- Show the average grade
    4- Change a grade (indicating the position)
    5- Show the highest grade(s)
    6- Show a count of passed students (grade >=10)
    7- Show a count of failed students (grade <10)
    0- Exit


    Notes:

    The array has 10 elements and is of type float.
    Grades range between 0 and 20.
*/

void menu()
{
  system("clear");
  printf("*** Student Grades ***\n");
  printf("1 - Gather grades\n");
  printf("2 - Show all grades\n");
  printf("3 - Show average grade\n");
  printf("4 - Change a grade (indicating the position)\n");
  printf("5 - Show highest grade(s)\n");
  printf("6 - Show count of passed students (grade >= 10)\n");
  printf("7 - Show count of failed students (grade < 10)\n");
  printf("0 - Exit!\n");
}

void gather(float vector[])
{
  printf("Gathering grades\n");
  for(int i=0; i<10; i++)
  {
    printf("Enter grade for student %d: ", i+1);
    scanf("%f", &vector[i]);
    if (vector[i] > 20 || vector[i] < 0)
    {
      printf("Grade must be between 0 and 20!\n");
      i--;
    }
  }
  printf("All grades were successfully entered!\n");
  printf("Please wait for 3 seconds!\n");
  sleep(3);
}

void grades(float vector[])
{
  printf("Listing all grades!\n");
  for(int i=0; i< 10; i++)
  {
    printf("student %d - %.2f\n", i+1, vector[i]);
  }
  printf("All grades were listed!\n");
  printf("Please wait for 3 seconds!\n");
  sleep(3);
}

void average(float vector[])
{
  float average = 0;
  printf("Average of grades\n");
  for(int i=0; i< 10; i++)
  {
    average += vector[i];
  }
  printf("The average grade of students is %.2f!\n", average/10);
  printf("Please wait for 3 seconds!\n");
  sleep(3);
}

void change(float vector[])
{
  printf("Changing a grade!\n");
  int i;
  printf("Enter the student to have the grade changed: ");
  scanf("%d", &i);
  printf("Enter the value of the new grade: ");
  scanf("%f", &vector[i-1]);
  if (vector[i-1] > 20 || vector[i-1] < 0)
  {
    printf("Grade must be between 0 and 20!\n");
    change(vector);
  }
  else
  {
    printf("Grade changed successfully\n");
    printf("Please wait for 3 seconds!\n");
    sleep(3);
  }
}

void highest(float vector[])
{
  float highest = 0;
  printf("Highest grade!\n");
  for(int i=0; i< 10; i++)
  {
     if (highest < vector[i])
      highest = vector[i];
  }
  printf("The highest grade is %.2f!\n", highest);
  printf("Please wait for 3 seconds!\n");
  sleep(3);
}

void passed(float vector[])
{
  int passed = 0;
  printf("Counting passed students!\n");
  for(int i=0; i<10; i++)
  {
     if (vector[i] > 9)
      passed++;
  }
  printf("%d student(s) passed!\n", passed);
  printf("Please wait for 3 seconds!\n");
  sleep(3);
}

void failed(float vector[])
{
  printf("Counting failed students!\n");
  int failed = 0;
  for(int i=0; i<10; i++)
  {
     if (vector[i] < 10)
      failed++;
  }
  printf("%d student(s) failed!\n", failed);
  printf("Please wait for 3 seconds!\n");
  sleep(3);
}

int main()
{
  system("clear");
  int option;
  float vector[10] = {0,0,0,0,0,0,0,0,0,0};
  do
  {
    menu();
    printf("Choose an option: ");
    scanf("%d", &option);
    switch(option)
    {
      case 1:
        gather(vector);
        break;
      case 2:
        grades(vector);
        break;
      case 3:
        average(vector);
        break;
      case 4:
        change(vector);
        break;
      case 5:
        highest(vector);
        break;
      case 6:
        passed(vector);
        break;
      case 7:
        failed(vector);
        break;
      case 0:
        break;
      default:
        printf("Invalid option!\nPlease wait for 3 seconds!\n");
        sleep(3);
    }
  }while (option != 0);
  return (0);
}
