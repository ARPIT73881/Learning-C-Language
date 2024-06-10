// Create an array of 10 numbers.Verify using pointer arithematic that(ptr + 2) points to the third element where ptr is a pointer pointing to the first element of the array .
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *ptr = &arr[0];
  // can also be written as
  //  ptr == arr
  printf("The element at the third position is %d\n", *ptr + 2);
  if (ptr + 2 == &arr[2])
  {
    printf("These points to the same location in the memory");
  }
  else
  {
    printf("These do not points to the same location in the memory");
  }

  return 0;
}