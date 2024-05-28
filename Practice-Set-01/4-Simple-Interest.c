// Program to calculate simple interest by given set of values
#include <stdio.h>

int main(int argc, char const *argv[])
{
  float principal, rate, time;
  printf("Enter the value of principal = ");
  scanf("%f", &principal);
  printf("Enter the value of rate = ");
  scanf("%f", &rate);
  printf("Enter the value of time = ");
  scanf("%f", &time);
  printf("The Simple Interest is = %0.2f", principal * rate * time);
  return 0;
}