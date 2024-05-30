// Write a program to check whether a year is leap year or not
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int year;
  printf("Enter the year = ");
  scanf("%d", &year);
  if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0))
  {
    printf("The year %d is a leap year", year);
  }
  else
  {
    printf("The year %d is not a leap year", year);
  }

  return 0;
}