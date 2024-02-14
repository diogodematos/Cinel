#include <stdio.h>
#include <stdlib.h>

/*
The aim is to calculate the value of a fine taking into account the speed
permitted within a locality and the speed of a vehicle.
For each excess km the cost is $5. If the vehicle drives with
speed within the limits the value of the fine is not displayed appearing
the following message: "The vehicle was traveling within the speed limits!".
*/


int main()
{
  system("clear");
  int maxspeed, carspeed, fine;
  printf("Enter the maximum speed allowed within the location: ");
  scanf("%d", &maxspeed);
  printf("Enter how fast the vehicle was going: ");
  scanf("%d", &carspeed);
  if (carspeed > maxspeed)
  {
    fine = (carspeed - maxspeed) * 5;
    printf("The speeding fine to be paid is  %d\n", fine);
  }
  else
    printf("The vehicle was traveling within the speed limits!\n");
  return(0);
}