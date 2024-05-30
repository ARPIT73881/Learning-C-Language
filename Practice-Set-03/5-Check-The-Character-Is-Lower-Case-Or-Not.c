// Write a program to determine if the character is lowercase or not
#include <stdio.h>

int main(int argc, char const *argv[])
{
  // 97-122 a-z
  char ch;
  printf("Enter any character = ");
  scanf("%d", &ch);
  if (ch <= 122 && ch >= 97)
  {
    printf("The character %c is a lowercase letter", ch);
  }
  else
  {
    printf("The character %c is a lowercase letter", ch);
  }
  return 0;
}