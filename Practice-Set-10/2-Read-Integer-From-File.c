// Write a program to read 3 integers from a file
// double the value of number 2 -> write it to number 4
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num1, num2, num3, num4;
  FILE *ptr;
  printf("The numbers are stored in text file\n");
  ptr = fopen("2-File.txt", "r");
  fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
  printf("The value of a = %d\n", num1);
  printf("The value of b = %d\n", num2);
  printf("The value of c = %d\n", num3);
  fclose(ptr);
  return 0;
}