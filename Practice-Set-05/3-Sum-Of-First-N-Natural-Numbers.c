// Write a recursive function to calculate sum of n natural numbers.
// 4 -> 1 + 2 + 3 + 4 = 10
// 9 -> 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 = 45
#include <stdio.h>

int sum(int num);

int main(int argc, char const *argv[])
{
  int num, result = 0;
  printf("Enter any number = ");
  scanf("%d", &num);
  result = sum(num);
  printf("The sum upto %d natural numbers = %d", num, result);
  return 0;
}

int sum(int num)
{
  if (num != 0)
  {
    return num + sum(num - 1);
  }
  else
  {
    return num;
  }
}