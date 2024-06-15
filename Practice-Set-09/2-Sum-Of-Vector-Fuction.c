// Write a function sumvector which returns the sum of first two vectors passed to it . The vectors must be 2D
#include <stdio.h>

typedef struct Vector
{
  int x;
  int y;
} Vec;

Vec sumvector(Vec v1, Vec v2)
{
  Vec result;
  result.x = v1.x + v2.x;
  result.y = v1.y + v2.y;
  return result;
}

int main(int argc, char const *argv[])
{
  Vec v1, v2, sum;
  printf("Enter the values of vector v1 \n");
  scanf("%d %d", &v1.x, &v1.y);
  printf("Enter the values of vector v2 \n");
  scanf("%d %d", &v2.x, &v2.y);
  printf("The value of the structure v1 = %d %d\n", v1.x, v1.y);
  printf("The value of the structure v1 = %d %d\n", v2.x, v2.y);
  sum = sumvector(v1, v2);
  printf("The sum of two vectors  = %d %d \n", sum.x, sum.y);
  return 0;
}