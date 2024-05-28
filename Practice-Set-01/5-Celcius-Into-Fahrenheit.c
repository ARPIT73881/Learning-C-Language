// Program to convert celcius into fahrenheit
//  fahrenheit = (celsius * 9 / 5) + 32
#include <stdio.h>

int main(int argc, char const *argv[])
{
  float celsius, fahrenheit;
  printf("Enter the temperature in celsius = ");
  scanf("%f", &celsius);
  fahrenheit = (celsius * 9 / 5) + 32;
  printf("The temperature in fahrenheit = %0.3f", fahrenheit);

  return 0;
}
