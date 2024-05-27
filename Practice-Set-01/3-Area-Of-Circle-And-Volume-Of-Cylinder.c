// Program to calculate the area of circle and modify the same program to calculate the volume of cylinder
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int radius;
  float pi = 3.14;
  printf("Enter the radius of circle = ");
  scanf("%d", &radius);
  printf("The area of the circle = %0.2f square unit", pi * radius * radius);

  int height;
  printf("\nEnter the height of the cylinder = ");
  scanf("%d", &height);
  printf("The volume of the cylinder = %0.2f cube unit", pi * radius * radius * height);
  return 0;
}