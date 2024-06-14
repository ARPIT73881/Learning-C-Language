// Make your own version of strcpy function
#include <stdio.h>

void copy(char *source, char *target)
{
  int i = 0;
  for (i = 0; source[i] != '\0'; i++)
  {
    target[i] = source[i];
  }
  target[i] = '\0';
}

int main(int argc, char const *argv[])
{
  char str[20], str2[20];
  printf("Enter any string = ");
  scanf("%s", &str);
  copy(str, str2);
  printf("The copied string is %s", str2);
  return 0;
}