// Write a program to print the address of variable. Use this address to get the value of variable.
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num;
  int *ptr = &num;
  printf("Enter any number = ");
  scanf("%d", &num);
  printf("The number is %d\n", num);
  printf("The address of the variable is %u\n", ptr);
  printf("The value at %u is %d", ptr, *ptr);
  return 0;
}