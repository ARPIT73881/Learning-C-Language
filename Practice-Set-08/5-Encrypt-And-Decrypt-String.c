// Write a program to encrypt a string by adding 1 to the ascii value of the character and also decrypt it using the same method
#include <stdio.h>

void encrpt(char *st)
{
  char *ptr = st;
  while (*ptr != '\0')
  {
    *ptr = *ptr + 1;
    ptr++;
  }
}

void decrpt(char *st)
{
  char *ptr = st;
  while (*ptr != '\0')
  {
    *ptr = *ptr - 1;
    ptr++;
  }
}

int main(int argc, char const *argv[])
{
  char str[30];
  printf("Enter any string = ");
  gets(str);
  printf("The entered string is = %s\n", str);
  // puts("The entered string is = ");
  // puts(str);
  encrpt(str);
  printf("The encrypted string is = %s\n", str);
  decrpt(str);
  printf("The decrypted string is = %s\n", str);

  return 0;
}