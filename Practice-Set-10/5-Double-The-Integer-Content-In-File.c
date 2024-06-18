// Write a program to read 3 integers from a file
// double the value of all the number
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num1, num2;
  FILE *ptr;
  ptr = fopen("5-File.txt", "w");

  // taking input and writing it to file
  printf("Enter any 2 numbers\n");
  scanf("%d %d", &num1, &num2);
  fprintf(ptr, "%d %d", num1, num2);
  fclose(ptr);

  // printing the content of file
  printf("The numbers are stored in text file\n");
  ptr = fopen("5-File.txt", "r");
  fscanf(ptr, "%d %d", &num1, &num2);
  printf("The value of a = %d\n", num1);
  printf("The value of b = %d\n", num2);
  fclose(ptr);

  // editing the content of file
  printf("After changing the content of file\n\n");
  ptr = fopen("5-File.txt", "w");
  // double the values
  fprintf(ptr, "%d %d", num1 * 2, num2 * 2);
  num1 = num1 * 2;
  num2 = num2 * 2;
  // printing the values
  printf("The value of a = %d\n", num1);
  printf("The value of b = %d\n", num2);
  fclose(ptr);
  printf("File contents updated\n");

  return 0;
}