// Print the multiplication table of 2 , 7 ,9 using the 2d array

#include <stdio.h>

void printtable(int *multable, int num, int n)
{
  printf("The multiplication table of %d\n", num);
  for (int i = 0; i < n; i++)
  {
    multable[i] = num * (i + 1);
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d x %d = %d\n", num, i + 1, multable[i]);
  }
}
int main(int argc, char const *argv[])
{
  int multable[3][10];
  printtable(multable[0], 2, 10);
  printtable(multable[1], 7, 10);
  printtable(multable[2], 9, 10);
  return 0;
}