// Create an array dynamically to store the array of 3 integers . Now use realloc so that it can store 5 integers.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // pointer to store dynamic memory allocation
  int *ptr;
  // allocating memory dynamically
  // malloc --- for size 3
  ptr = (int *)(malloc(3 * sizeof(int)));
  // calloc
  // ptr = (int *)(calloc(num, sizeof(int)));
  printf("\nFor size 3 integers\n\n");
  for (int i = 0; i < 3; i++)
  {
    printf("Enter the values of %d element = ", i);
    scanf("%d", &ptr[i]);
  }
  printf("\n");
  // printing the array elements
  for (int i = 0; i < 3; i++)
  {
    printf("Enter the values of %d element = %d\n", i, ptr[i]);
  }

  printf("\n\nFor size 5 integers\n\n");

  ptr = realloc(ptr, 5 * sizeof(int));

  for (int i = 0; i < 5; i++)
  {
    printf("Enter the values of %d element = ", i);
    scanf("%d", &ptr[i]);
  }
  printf("\n");
  // printing the array elements
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the values of %d element = %d\n", i, ptr[i]);
  }
  // free the memory
  free(ptr);

  return 0;
}