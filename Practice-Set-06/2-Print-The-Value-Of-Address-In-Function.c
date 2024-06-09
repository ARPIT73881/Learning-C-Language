// Write a program having a variable i, print the address of i, pass it to a function and print it .
#include <stdio.h>

int address(int num)
{
  printf("The address of the variable inside the function %u\n", &num);
}
int main(int argc, char const *argv[])
{
  int num;
  printf("Enter any number = ");
  scanf("%d", &num);
  printf("The address of the variable is %u\n", &num);
  address(num);
  return 0;
}