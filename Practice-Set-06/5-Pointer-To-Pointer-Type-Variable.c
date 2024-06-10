// Write a program to print the value of the variable by using pointer to pointer type of variable.
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i = 10;
  int *ptr;
  int **ptr_ptr;

  ptr = &i;
  ptr_ptr = &ptr;

  printf("The value of the i is %d\n", **ptr_ptr);
  printf("The address of the i is %u", ptr);
  return 0;
}