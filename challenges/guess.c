#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int randomNumber = 0;
  int guess = 0;
  int numberOfGuess = 5;
  time_t t;

  srand((unsigned) time(&t));
  randomNumber = rand() % 21;

  printf("input 0 to 20\n");

  while(numberOfGuess > 0) {
    printf("%d left\n", numberOfGuess);
    printf("enter a number\n");
    scanf("%d", &guess);

    if (guess == randomNumber) {
      printf("Congratulation");
    } else if (guess < randomNumber) {
      printf("more higher\n");
    } else if (guess > randomNumber) {
      printf("more lower\n");
    }

    --numberOfGuess;
  }

  return 0;
}