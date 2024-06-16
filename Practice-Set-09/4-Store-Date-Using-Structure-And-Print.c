// Write a structure capable of storing date and also write a function to print the dates
#include <stdio.h>

typedef struct dates
{
  int date;
  char month[10];
  int year;
} date;

void print(date d)
{
  printf("The date is %d-%s-%d\n", d.date, d.month, d.year);
}
int main(int argc, char const *argv[])
{
  date one, two;
  printf("Enter the date , month and year - one\n");
  scanf("%d %s %d", &one.date, &one.month, &one.year);
  printf("Enter the date , month and year - two\n");
  scanf("%d %s %d", &two.date, &two.month, &two.year);
  print(one);
  print(two);
  return 0;
}