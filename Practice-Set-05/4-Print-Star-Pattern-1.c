/*

 5
 *
 **
 ***
 ****
 *****

 print the star pattern for the entered number
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num;
  printf("Enter any number = ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}