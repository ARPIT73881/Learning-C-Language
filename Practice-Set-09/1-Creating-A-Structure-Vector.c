// Create a 2D vector using structure in c
#include <stdio.h>

typedef struct Vector
{
  int x;
  int y;
} Vec;

int main(int argc, char const *argv[])
{
  Vec v1, v2;
  printf("Enter the values of vector v1 \n");
  scanf("%d %d", &v1.x, &v1.y);
  printf("Enter the values of vector v2 \n");
  scanf("%d %d", &v2.x, &v2.y);
  printf("The value of the structure v1 = %d %d\n", v1.x, v1.y);
  printf("The value of the structure v1 = %d %d\n", v2.x, v2.y);
  return 0;
}