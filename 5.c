 
#include <stdio.h>
 
int main()
{
  int year;
 
  printf("Enter a year to check leap\n");
  scanf("%d", &year);
 
  if (year%400 == 0) //e.g. 1600, 2000
    printf("%d is a leap year.\n", year);
  else if (year%100 == 0) //e.g. 1900, 2100
    printf("%d isn't a leap year.\n", year);
  else if (year%4 == 0) // divisible by 4 but not by 100 or 400 e.g. 2016, 2020
    printf("%d is a leap year.\n", year);
  else // Not divisible by 4 or 100 or 400 e.g. 2017, 2018, 2019
    printf("%d isn't a leap year.\n", year);  
   
  return 0;
}
