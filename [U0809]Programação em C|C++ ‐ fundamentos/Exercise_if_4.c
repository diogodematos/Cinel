#include <stdlib.h>
#include <stdio.h>

/* 
Request from user the day, month, year of birth, and the day, month and year of current date!
*/

int main()
{
  system("clear");
  int da,ma,aa,dn,mn,an,age;
  printf("Enter the day of birth: ");
  scanf("%d", &dn);
  printf("Enter the month of birth: ");
  scanf("%d", &mn);
  printf("Enter the year of birth: ");
  scanf("%d", &an);
  printf("Enter the current day: ");
  scanf("%d", &da);
  printf("Enter the current month: ");
  scanf("%d", &ma);
  printf("Enter the current year: ");
  scanf("%d", &aa);
  age = aa-an;
  if ((ma<mn) || (ma=mn && da<dn))
    age--;
  printf("A idade e %d\n", age);
  return(0);
}