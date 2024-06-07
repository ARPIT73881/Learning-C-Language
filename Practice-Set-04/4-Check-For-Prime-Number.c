// Check if the entered number is prime or not
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num, i, count = 0;
  printf("Enter any number = ");
  scanf("%d", &num);
  for (i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      count += 1;
    }
  }
  if (count == 0)
  {
    printf("The number %d is a prime number ", num);
  }
  else
  {
    printf("The number %d is not a prime number ", num);
  }

  return 0;
}