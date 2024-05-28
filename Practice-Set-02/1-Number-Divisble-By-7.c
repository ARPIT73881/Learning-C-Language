// Program to check if the entered number is divisible by 7 or not
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num;
  printf("Enter any number = ");
  scanf("%d", &num);
  printf("The divisibility test returns %d", num % 7);
  printf("\n\nThe number is divisible only if the result is 0");

  return 0;
}