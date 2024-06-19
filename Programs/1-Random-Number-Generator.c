// Program to generate random numbers upto 100 in c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
  int num;
  srand(time(0));
  num = rand() % 100 + 1;
  printf("The number generated is %d", num);
  return 0;
}