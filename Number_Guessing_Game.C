/*
NAME        : GABRIEL KARIUKI
REG NO.     : CT101/G/26446/25
DESCRIPTION : A C program that uses while loop to generate a random number between 1 and 20.
*/

#include <stdio.h>

int main() {
	
	int attempts = 0;
    int secretNumber = 12;
	int guess = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 20.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts = attempts+1;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } 
        else if (guess < secretNumber) {
            printf("Too low!\n");
        } 
        else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break; 
        }
    }

    return 0;
}