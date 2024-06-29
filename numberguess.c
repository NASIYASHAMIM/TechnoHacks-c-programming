#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number_to_guess, user_guess;

    // Seed the random number generator
    srand(time(0));
    number_to_guess = rand() % 100 + 1;

    printf("Guess the number between 1 and 100!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);

        if (user_guess < number_to_guess) {
            printf("Too low! Try again.\n");
        } else if (user_guess > number_to_guess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number.\n");
        }
    } while (user_guess != number_to_guess);

    return 0;
}s