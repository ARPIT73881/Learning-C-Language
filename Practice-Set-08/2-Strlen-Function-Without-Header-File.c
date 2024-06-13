// Write your own version of strlen function from <string.h>
#include <stdio.h>
// #include <string.h>
int stringlen(char *st)
{
  char *ptr = st;
  int len = 0;
  while (*ptr != '\0')
  {
    len++;
    // update the value of ptr to avoid stucking the while loop
    ptr++;
  }
  return len;
}

int main(int argc, char const *argv[])
{
  char str[30];
  int len = 0, i;
  printf("Enter any string = ");
  scanf("%s", str);

  len = stringlen(str);

  printf("length of string is %d", len);
  return 0;
}