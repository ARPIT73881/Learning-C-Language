// Write a program to count the occurence of a given character in a string
#include <stdio.h>

int count(char *st, char ch)
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
  printf("Enter the character to find the occurence = ");
  scanf("%c", &character);
  occur = count(str, character);
  printf("The occurence of %c character in the string is = %d\n", character, occur);
  return 0;
}