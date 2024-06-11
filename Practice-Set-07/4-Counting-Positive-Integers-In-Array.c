// Write a program which counts the number of positive integers in the array using functions
#include <stdio.h>

int count(int *arr, int n)
{
  int positive = 0, i;
  for (i = 0; i < n; i++)
  {
    if (arr[i] >= 0)
    {
      positive++;
    }
  }
  return positive;
}

int main(int argc, char const *argv[])
{
  int arr[20], num, positive;
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
  positive = count(arr, num);
  printf("\nThe number of positive elements in the array are %d", positive);
  return 0;
}