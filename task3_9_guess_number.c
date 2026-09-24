#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Thought: Generate a hidden number, compare each guess, count attempts, and offer a replay. */
int main(void)
{
    char answer;

    srand((unsigned int)time(NULL));
    do {
        int target = rand() % 100 + 1;
        int guess;
        int attempts = 0;

        printf("I have chosen a number from 1 to 100.\n");
        do {
            printf("Your guess: ");
            if (scanf("%d", &guess) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            ++attempts;
            if (guess > target) {
                printf("Too large.\n");
            } else if (guess < target) {
                printf("Too small.\n");
            } else {
                printf("Correct! You guessed it in %d attempt(s).\n", attempts);
            }
        } while (guess != target);

        printf("Play again? (y/n): ");
        scanf(" %c", &answer);
    } while (answer == 'y' || answer == 'Y');

    printf("Game finished.\n");
    return 0;
}
