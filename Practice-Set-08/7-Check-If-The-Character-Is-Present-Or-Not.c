// Write a program to check whether a given character is present in the string or not.

#include <stdio.h>

int check(char *st, char ch)
{
  char *ptr = st;
  int occur = 0;
  while (*ptr != '\0')
  {
    if (*ptr == ch)
    {
      occur++;
    }
    ptr++;
  }

  return occur;
}

int main(int argc, char const *argv[])
{
  char str[30], character;
  int occur;
  printf("Enter any string = ");
  gets(str);
  printf("The entered string is = %s\n", str);
  printf("Enter the character  = ");
  scanf("%c", &character);
  occur = check(str, character);
  if (occur >= 1)
  {
    printf("The given character is present\n");
  }
  else
  {
    printf("The given character is not present\n");
  }
  return 0;
}