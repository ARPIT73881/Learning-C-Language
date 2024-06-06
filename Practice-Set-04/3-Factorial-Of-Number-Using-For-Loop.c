// Write a program to calculate factorial of number using for loop
// 5! = 5 * 4 * 3 * 2 * 1
// 5! = 1 * 2 * 3 * 4 * 5
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num, fact = 1;
  printf("Enter any number whose factorial you want to calculate = ");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++)
  {
    fact = fact * i;
  }
  printf("The factorial of %d is %d", num, fact);

  return 0;
}