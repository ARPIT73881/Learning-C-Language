// Write a program to dynamically create an array of user given size and print it.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int num;
  // pointer to store dynamic memory allocation
  int *ptr;
  printf("Enter the size of array = ");
  scanf("%d", &num);
  // allocating memory dynamically
  // malloc
  ptr = (int *)(malloc(num * sizeof(int)));
  // calloc
  // ptr = (int *)(calloc(num, sizeof(int)));
  for (int i = 0; i < num; i++)
  {
    printf("Enter the values of %d element = ", i);
    scanf("%d", &ptr[i]);
  }
  // printing the array elements
  for (int i = 0; i < num; i++)
  {
    printf("Enter the values of %d element = %d\n", i, ptr[i]);
  }
  // free the memory
  free(ptr);

  return 0;
}