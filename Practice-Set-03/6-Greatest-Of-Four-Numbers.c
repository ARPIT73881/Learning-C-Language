// Find the greatest of the four numbers
#include <stdio.h>

int main()
{
  int num1, num2, num3, num4, largest;
  printf("Enter any four numbers ");
  scanf("%d %d %d %d ", &num1, &num2, &num3, &num4);
  if (num1 > num2)
  {
    if (num1 > num3)
    {
      if (num1 > num4)
      {
        largest = num1;
      }
      else
      {
        largest = num4;
      }
    }
    else
    {
      if (num3 > num4)
      {
        largest = num3;
      }
      else
      {
        largest = num4;
      }
    }
  }
  else
  {
    if (num2 > num3)
    {
      if (num2 > num4)
      {
        largest = num2;
      }
      else
      {
        largest = num4;
      }
    }
    else
    {
      if (num3 > num4)
      {
        largest = num3;
      }
      else
      {
        largest = num4;
      }
    }
  }

  printf("The greatest of four numbers is %d ", largest);
  return 0;
}