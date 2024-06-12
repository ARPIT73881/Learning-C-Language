// Printing a 2-D array with function
#include <stdio.h>

void printarray(int *arr[20][20], int row, int col)
{
  int i, j;
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main(int argc, char const *argv[])
{
  int arr[20][20], row, col;
  printf("Enter the number of rows ");
  scanf("%d", &row);
  printf("Enter the number of columns ");
  scanf("%d", &col);
  printf("Enter the elements of 2-D array \n");

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  printf("The elements of 2-D array are \n");

  printarray(arr, row, col);

  return 0;
}