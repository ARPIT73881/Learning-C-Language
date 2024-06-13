// Make your own string slice function which slices the string according to the user's need
// arpit , 0 , 3 --> arp
#include <stdio.h>

void slice(char *st, int start, int end)
{
  int i = 0;
  while ((start + i) < end)
  {
    st[i] = st[i + start];
    i++;
  }
  st[i] = '\0';
}

int main(int argc, char const *argv[])
{
  char str[30];
  int start, end;
  printf("Enter the string = ");
  scanf("%s", &str);
  printf("Enter the parts of slicing i.e. start to end = \n");
  scanf("%d %d", &start, &end);
  slice(str, start, end);
  printf("The string is %s", str);
  return 0;
}