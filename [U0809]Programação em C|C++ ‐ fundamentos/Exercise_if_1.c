#include <stdio.h>
#include <stdlib.h>

/*
Request the user's age and evaluate its value;
If the value is less than 18, the program most inform the following: 
  "You can't vote yet!" and state how many years remain until that time.
Otherwise write the message: "You can't vote now!"
*/

int main()
{
  system("clear");
  int age;
  printf("Put your age: ");
  scanf("%d", &age);
  if (age >= 18)
    printf("You can't vote now!\n");
  else
    printf("You can't vote yet! You need to wait %d years!\n", 18 - age);
  return (0);
}