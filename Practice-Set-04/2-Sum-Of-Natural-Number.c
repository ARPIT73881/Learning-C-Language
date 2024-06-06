// Write a program to print the sum of natural numbers using while loop
// sum = n(n+1)/2
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num, sum = 0, i;
  printf("Enter the limit of number till when you want to calculate the sum = ");
  scanf("%d", &num);

  // for loop
  // for (i = 0; i <= num; i++)
  // {
  //   sum += i;
  // }

  // while loop
  while (i <= num)
  {
    sum = sum + i;
    i++;
  }

  // sum = (num * (num + 1)) / 2; by the formula

  printf("The sum of natural numbers upto %d is = %d", num, sum);
  return 0;
}