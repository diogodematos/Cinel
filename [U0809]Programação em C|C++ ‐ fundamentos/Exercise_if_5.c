#include <stdlib.h>
#include <stdio.h>

/* 
Request from user the date of birth and the current date!
*/

int main()
{
  system("clear");
  int day,month,year,bday,bmonth,byear,age;
  printf("Enter the date of your birth on this format dd-mm-yyyy: ");
  scanf("%d-%d-%d", &bday, &bmonth, &byear);
  printf("Enter the current date on this format dd-mm-yyyy: ");
  scanf("%d-%d-%d", &day, &month, &year);
  if(byear>year)
    printf("The year of birth cannot be greater than the current year!\n");
  else if ((byear==year) && (bmonth > month))
    printf("If the year is the same, the month of birth cannot be greater than the current month!\n");
  else if ((byear==year) && (bmonth == month) && (bday > day))
    printf("If the year and the month are the same, the day of birth cannot be greater than the current day!\n");
  else
  {
    age = year-byear;
    if ((month<bmonth) || (month=bmonth && day<bday))
      age--;
    printf("The age is %d\n", age);
  }
  return(0);
}