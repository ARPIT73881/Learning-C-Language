// Write a program to generate multiplication table of given number in txt format . Make sure that the file is readable and well formatted .
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num;
  FILE *fptr;
  fptr = fopen("3-File.txt", "w");
  printf("Enter the number whose multiplication table you want to print = ");
  scanf("%d", &num);
  for (int i = 1; i <= 10; i++)
  {
    fprintf(fptr, "%d x %d = %d\n", num, i, num * i);
  }
  fclose(fptr);
  printf("Table of %d is successfully generated in 3-File.txt\n", num);
  return 0;
}