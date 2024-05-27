// C program to calculate area of rectangle
#include <stdio.h>

int main(int argc, char const *argv[])
{
  float length, breadth;
  printf("\nEnter the length of rectangle = ");
  scanf("%f", &length);
  printf("\nEnter the breadth of rectangle = ");
  scanf("%f", &breadth);
  printf("\n\nThe area of rectangle = %0.2f", length * breadth);

  return 0;
}