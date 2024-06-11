// Write a program containing a function which reverses the array pass to it.
//  0 1 2 3 4 5 -> 5 4 3 2 1 0
#include <stdio.h>

int reverse(int *arr, int n)
{
  for (int i = 0; i < (n / 2); i++)
  {
    int temp = arr[i];
    // n = 6
    // 0 -> 6
    // 1-> 5
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
}

int main(int argc, char const *argv[])
{
  int arr[20], num;
  printf("Enter the limit of the array = ");
  scanf("%d", &num);
  printf("Enter the elements of the array \n");
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("The array element are ");
  for (int i = 0; i < num; i++)
  {
    printf("%d  ", arr[i]);
  }
  reverse(arr, num);
  printf("\nArray after the reverse is ");
  for (int i = 0; i < num; i++)
  {
    printf("%d  ", arr[i]);
  }
  return 0;
}