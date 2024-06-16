#include <stdio.h>

int main(int argc, char const *argv[])
{
  FILE *fptr;

  // for file opening and writing a content to file
  // fptr = fopen("1-File.txt", "w");
  // int num = 70;
  // fprintf(fptr, "The number is %d", num);
  // fclose(fptr);

  // for file opening in read mode and reading content with the file
  fptr = fopen("1-File.txt", "r");
  char c;
  c = fgetc(fptr);
  while (c != EOF)
  {
    printf("%c", c);
    c = fgetc(fptr);
  }
  fclose(fptr);

  return 0;
}