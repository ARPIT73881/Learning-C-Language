// Write a program using a function which calculates the sum and average of 2 numbers.Use pointers to print the value of sum and average in main

#include <stdio.h>

void SumAndAverage(int a, int b, int *sum, float *avg)
{
  *sum = a + b;
  *avg = *sum / 2.0;
}

int main(int argc, char const *argv[])
{
  int num1, num2, sum = 0;
  float avg;
  printf("Enter first number = ");
  scanf("%d", &num1);
  printf("Enter second number = ");
  scanf("%d", &num2);

  SumAndAverage(num1, num2, &sum, &avg);

  printf("The sum is %d and the average is %0.1f", sum, avg);
  return 0;
}

// #include <stdio.h>

// int Sum(int *num1, int *num2)
// {
//   return *num1 + *num2;
// }
// float Average(int *num1, int *num2)
// {
//   return ((*num1 + *num2) / 2.0);
// }

// int main(int argc, char const *argv[])
// {
//   int num1, num2, sum = 0;
//   float avg;
//   printf("Enter first number = ");
//   scanf("%d", &num1);
//   printf("Enter second number = ");
//   scanf("%d", &num2);

//   sum = Sum(&num1, &num2);

//   avg = Average(&num1, &num2);

//   printf("The sum is %d and the average is %0.1f", sum, avg);
//   return 0;
// }