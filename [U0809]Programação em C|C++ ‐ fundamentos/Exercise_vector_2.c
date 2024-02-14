#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("clear");
  int numbers[5];
  int position;
  // fill the array by reading
  for (int i = 0; i < 5; i++)
  {
    printf("Enter value for position %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }
  for(int i = 0; i < 5; i++)
    printf("Na position %d o valor e %d\n", i+1, numbers[i]);

  // show an array value associated with a position indicated by the user;
  printf("Indicate the position whose value you want to display (1 and 5): ");
  scanf("%d", &position);
  printf("The value in the position %d e %d\n", position, numbers[position-1]);
  return(0);
}