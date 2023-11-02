/*
    Name: exercise_4.c
    Author: Levin Baenninger
    Date: 27.10.2023
    Version: 2.1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Number guessing game
    // Declaring Variables
    int randnum, guess, count, difficulty;

    // Get user input
    printf("Welcome to the number guessing game! Which number should be the maximum? ");
    // Check if input is number, if not program "crashes"
    if (scanf("%d", &difficulty) != 1)
    {
        printf("This is not a number. Exit program...");
        return EXIT_FAILURE;
    }

    // Calculate random number
    srand(time(NULL));
    randnum = rand() % difficulty + 1;

    // Get user input
    do
    {
        printf("\nPlease type in your guess: ");
        if (scanf("%d", &guess) != 1)
        {
            printf("This is not a number.");
            return EXIT_FAILURE;
        }

        if (guess < randnum && guess <= difficulty)
        {
            printf("\nRandom number is bigger!");
            count++;
        }
        else if (guess > randnum && guess <= difficulty)
        {
            printf("\nRandom number is smaller!");
            count++;
        }
        else
            printf("\nYour number is bigger than your maximum number!");
    } while (guess != randnum);

    printf("\nYou have found the random number! It took you %d guesses.", count);

    return 0;
}