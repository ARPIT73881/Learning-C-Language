// Write a c program capable of playing Rock , Paper , Scissor with you
// Your program should be able to print the result after you choose rock , paper , scissors

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
  // returns 1 if you win, -1 if you lose and 0 if draw
  // Condition for draw
  // Cases covered:
  // rr -- rock and rock
  // pp -- paper and paper
  // ss -- scissors and scissors
  if (you == comp)
  {
    return 0;
  }

  // Non-draw conditions
  // Cases covered:
  // rp rock and paper
  // pr paper and rock
  // rs rock and scissors
  // sr scissors and rock
  // ps paper and scissors
  // sp scissor and paper

  if (you == 'r' && comp == 'p')
  {
    return -1;
  }
  else if (you == 'p' && comp == 'r')
  {
    return 1;
  }

  if (you == 'r' && comp == 's')
  {
    return 1;
  }
  else if (you == 's' && comp == 'r')
  {
    return -1;
  }

  if (you == 'p' && comp == 's')
  {
    return -1;
  }
  else if (you == 's' && comp == 'p')
  {
    return 1;
  }
}
int main()
{
  char you, comp;
  srand(time(0));
  int number = rand() % 100 + 1;

  if (number < 33)
  {
    comp = 'r';
  }
  else if (number > 33 && number < 66)
  {
    comp = 'p';
  }
  else
  {
    comp = 's';
  }

  printf("Enter 'r' for rock, 'p' for paper and 's' for scissors\n");
  scanf("%c", &you);
  int result = snakeWaterGun(you, comp);
  if (result == 0)
  {
    printf("Game draw!\n");
  }
  else if (result == 1)
  {
    printf("You win!\n");
  }
  else
  {
    printf("You Lose!\n");
  }
  printf("You chose %c and computer chose %c. ", you, comp);
  return 0;
}