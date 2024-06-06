/*
Write a program to print the table of 2 in reverse order upto 20
2 x  10 = 20
2 x  9 = 18
...
...
2 x  1 = 2
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number, i;
  printf("Enter any number = ");
  scanf("%d", &number);
  for (i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d\n", number, i, number * i);
  }

  printf("\nThe table in reverse order \n");

  for (i = 10; i; i--)
  {
    printf("%d * %d = %d\n", number, i, number * i);
  }

  return 0;
}
