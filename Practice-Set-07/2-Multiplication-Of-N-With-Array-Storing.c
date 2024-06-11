// Write a program to create an array of 10 integers and store the multiplication table of n in it.
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int arr[10], num;
  printf("Enter any number = ");
  scanf("%d", &num);
  for (int i = 0; i < 10; i++)
  {
    arr[i] = num * (i + 1);
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d x %d = %d\n", num, i + 1, arr[i]);
  }

  return 0;
}

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int arr[10];
//   // table of 5
//   for (int i = 0; i < 10; i++)
//   {
//     arr[i] = 5 * (i + 1);
//   }
//   for (int i = 0; i < 10; i++)
//   {
//     printf("5 x %d = %d\n", i + 1, arr[i]);
//   }

//   return 0;
// }
