// Create an array of 5 complex number and display them with the help of display fuction
#include <stdio.h>

typedef struct ComplexNumber
{
  int real;
  int complex;
} cnum;

// Vec sumvector(Vec v1, Vec v2)
// {
//   Vec result;
//   result.x = v1.x + v2.x;
//   result.y = v1.y + v2.y;
//   return result;
// }

void display(cnum c)
{
  printf("The value of Real part & Complex part =  %d %d\n", c.real, c.complex);
}

int main(int argc, char const *argv[])
{
  cnum num[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the Real and Complex values of vector %d = ", i + 1);
    scanf("%d %d", &num[i].real, &num[i].complex);
  }
  for (int i = 0; i < 5; i++)
  {
    display(num[i]);
  }

  return 0;
}