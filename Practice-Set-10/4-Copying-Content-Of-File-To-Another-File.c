// Write a program to read a text file character by character and write its content in a seperate file
#include <stdio.h>

int main(int argc, char const *argv[])
{
  char str[50], c;
  FILE *fptr1;
  FILE *fptr2;
  // write mode on file 1
  fptr1 = fopen("4-File1.txt", "w");
  printf("Enter the message you want to put in the file\n");
  gets(str);
  fprintf(fptr1, "%s", str);
  fclose(fptr1);
  // read mode on file 1
  fptr1 = fopen("4-File1.txt", "r");
  // write mode on file 2
  fptr2 = fopen("4-File2.txt", "w");
  c = fgetc(fptr1);
  // checking for end of file
  while (c != EOF)
  {
    fputc(c, fptr2);
    c = fgetc(fptr1);
  }
  // closing both the files
  fclose(fptr1);
  fclose(fptr2);
  printf("All the operations are successfully done in the text file\n");
  return 0;
}