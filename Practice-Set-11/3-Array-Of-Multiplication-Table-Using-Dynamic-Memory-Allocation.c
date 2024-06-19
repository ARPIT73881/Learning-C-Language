// Create an array of multiplication table of size 7 upto 5 ( 7 * 5 ) . Use realloc to make it store 10 numbers from ( 7 * 1) to ( 7 * 10)

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // pointer to store dynamic memory allocation
  int *ptr;
  int num = 7;
  // allocating memory dynamically
  // malloc --- for size 5
  ptr = (int *)malloc(5 * sizeof(int));
  // calloc
  // ptr = (int *)(calloc(num, sizeof(int)));
  printf("\nTable upto 5 places \n\n");
  // printing the array elements
  for (int i = 1; i <= 5; i++)
  {
    ptr[i] = num * i;
    printf("%d x %d = %d\n", num, i, ptr[i]);
  }

  printf("\n\nTable 10 places after reallocating\n\n");

  ptr = realloc(ptr, 10 * sizeof(int));

  for (int i = 1; i <= 10; i++)
  {
    ptr[i] = num * i;
    printf("%d x %d = %d\n", num, i, ptr[i]);
  }

  // free the memory
  free(ptr);

  return 0;
}