/*

 5
 *
 ***
 *****
 *******
 *********
 1-1
 2-3
 3-5
 .
 .
 2n-1

 print the star pattern for the entered number
 */

#include <stdio.h>
void print(int num);

int main(int argc, char const *argv[])
{
  int num;
  printf("Enter any number = ");
  scanf("%d", &num);
  print(num);
  return 0;
}

void print(int num)
{
  if (num == 1)
  {
    printf("*\n");
    return;
  }
  print(num - 1);
  for (int i = 1; i <= (2 * num - 1); i++)
  {
    printf("*");
  }
  printf("\n");
}