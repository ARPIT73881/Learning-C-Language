// Write a program using recursion to calculate the nth element of the Fibonacci series.
// 0 1 1 2 3 5 8 13 21 . . .
#include <stdio.h>

int fib(int num);

int main(int argc, char const *argv[])
{
  int position, number;
  printf("Enter the number = ");
  scanf("%d", &position);
  number = fib(position);
  printf("The number at %dth position is %d", position, number);
  return 0;
}

int fib(int num)
{
  if (num == 0)
  {
    return 0;
  }
  else if (num == 1)
  {
    return 1;
  }
  else
  {
    return (fib(num - 1) + fib(num - 2));
  }
}
