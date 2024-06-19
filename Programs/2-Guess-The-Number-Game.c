/*Write a program that generate a random number and ask the player to guess it. If the players guess is higher than the actual number, the program displays "lower number please ". Similarly, if the users guess is too low, the program prints "higher number please". When the users guesses the correct number, the program displays the number of guesses the player used to arrive at the number.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
  int guess, randomnumber, count = 1;
  srand(time(0));
  randomnumber = rand() % 100 + 1;
  // printf("Random number is %d\n", randomnumber);

  printf("Guess the number between 1 - 100 = ");
  scanf("%d", &guess);

  while (guess != randomnumber)
  {
    if (guess > randomnumber)
    {
      printf("Lower Number Please !\n");
      printf("Guess the number = ");
      scanf("%d", &guess);
      count++;
    }
    else if (guess < randomnumber)
    {
      printf("Higher Number Please !\n");
      printf("Guess the number = ");
      scanf("%d", &guess);
      count++;
    }
  }
  printf("You have guessed the number in %d times\n", count);

  return 0;
}