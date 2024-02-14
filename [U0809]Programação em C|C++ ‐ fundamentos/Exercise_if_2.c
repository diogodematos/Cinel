#include <stdio.h>
#include <stdlib.h>

/*
Request from user one grade between 0 and 20. 
  Depending on the grade write the following outputs:

grade < 10 - "Failed!"
grade >=10 e grade <12 - "Go to Exam!"
grade >12 - "Approved!"
*/

int main()
{
  system("clear");
  int grade;
  printf("Put the grade: ");
  scanf("%d", &grade);
  if (grade < 0 || grade > 20)
    printf("Invalid Grade! Put between 0 and 20!\n");
  else
  {
    if (grade < 10)
      printf("Failled!\n");
    else if (grade >= 10 && grade < 12)
      printf("Go to Exam!\n");
    else
      printf("Approved!\n");
  }
  return (0);
}