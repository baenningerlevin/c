/*
    Name: exercise_4.c
    Author: Levin Baenninger
    Date: 27.10.2023
    Version: 2.2
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Number guessing game
    // Declaring Variables
    int randnum, guess, count = 1, difficulty;

    // Get user input
    printf("\nWelcome to the number guessing game! Which number should be the maximum? ");

    // Check if input is number, if not program "crashes"
    if (scanf("%d", &difficulty) != 1)
    {
        printf("This is not a number. Exit program...");
        return EXIT_FAILURE;
    }
    else if (difficulty <= 0)
    {
        printf("This is not a positive number. Exit program...");
        return EXIT_FAILURE;
    }

    // Calculate random number
    srand(time(NULL));
    randnum = rand() % difficulty + 1;

    // Get user input
    do
    {
        printf("Please type in your guess: ");
        if (scanf("%d", &guess) != 1)
        {
            printf("This is not a number.");
            return EXIT_FAILURE;
        }

        // Check if guess is in range
        if (guess <= difficulty && guess >= 0)
        {
            if (guess < randnum)
            {
                printf("\nRandom number is bigger!\n");
                count++;
            }
            else if (guess > randnum)
            {
                printf("\nRandom number is smaller!\n");
                count++;
            }
        }
        else if (guess > difficulty)
            printf("\nYour number is bigger than your maximum number!");
        else if (guess < 0)
            printf("\nYour number is smaller than 0!");
    } while (guess != randnum);

    printf("\nYou have found the random number! It took you %d guesses.", count);

    return 0;
}