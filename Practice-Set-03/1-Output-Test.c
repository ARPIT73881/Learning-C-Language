// What will be the output of the program
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 10;
  if (a = 11)
  {
    printf("I am 11\n");
  }
  else
  {
    printf("I am not 11\n");
  }
  printf("The value of a is %d", a);

  // answer is 11 as a = 11 is assigning the value 11 into a
  // since (a == 1) is comparision
  // So result will be i am  11
  return 0;
}