// Write a program to take string as input from the user using % c and % s
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char string1[30], string2[30], c;
  int i = 0;
  printf("Enter the value of string 1 \n");
  scanf("%s", &string1);
  printf("Enter the value of string 2 character by character \n");
  while (c != '\n')
  {
    // use to clear the previous input
    // also to go to the second character input ,
    //  if not used the fflush(stdin) -> then after entering the first input program will skip the entering of second input
    fflush(stdin);
    scanf("%c", &c);
    string2[i] = c;
    i++;
  }
  string2[i - 1] = '\0';

  printf("The value of string by using %%s is %s\n", string1);
  printf("The value of string by using %%c is %s\n", string2);

  printf("Strcmp for these strings returns %d", strcmp(string1, string2));

  return 0;
}