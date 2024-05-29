// Write a program to find whether a student is pass or fail , if it requires total 40% marks and atleast 33% marks in each subject ( assume the subjects are  - physics , chemistry , maths)
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int physics, chemistry, maths;
  float average;

  // Enter the marks in each subjects , assume the marks in total of 100
  printf("Enter the marks in physics = ");
  scanf("%d", &physics);
  printf("Enter the marks in chemistry = ");
  scanf("%d", &chemistry);
  printf("Enter the marks in maths = ");
  scanf("%d", &maths);
  average = (physics + chemistry + maths) / 3.0;
  if (average < 40 || physics < 33 || chemistry < 33 || maths < 33)
  {
    printf("The student's total percentage is %0.2f %% and he fails the exam", average);
  }
  else
  {
    printf("The student's total percentage is %0.2f %% and he pass the exam", average);
  }

  return 0;
}