// Write a program to calculate the average of three numbers using functions
#include <stdio.h>

float avg(int num1, int num2, int num3);

int main(int argc, char const *argv[])
{
  int num1, num2, num3;
  float average;
  printf("\nEnter the first number = ");
  scanf("%d", &num1);
  printf("\nEnter the second number = ");
  scanf("%d", &num2);
  printf("\nEnter the third number = ");
  scanf("%d", &num3);

  average = avg(num1, num2, num3);
  printf("\nThe average of the numbers are = %0.2f", average);

  return 0;
}

float avg(int num1, int num2, int num3)
{
  return ((num1 + num2 + num3) / 3.0);
}