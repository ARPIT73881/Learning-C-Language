// Write a program to change the value of variable to ten times of its current value . Write a function and pass the value by reference
#include <stdio.h>

void change(int *ptr)
{
  *ptr = *ptr * 10;
}
int main(int argc, char const *argv[])
{
  int num;
  printf("Enter any number = ");
  scanf("%d", &num);
  printf("The value of variable is %d\n", num);
  change(&num);
  printf("The changed value of variable is %d\n", num);
  return 0;
}