/*
    Name: exercise_4.c
    Author: Levin Baenninger
    Date: 27.10.2023
    Version: 2.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Number guessing game
    // Declaring Variables
    int randnum, guess, count, difficulty;

    // TODO: Type checker

    // Get user input
    printf("Welcome to the number guessing game! Which number should be the maximum? ");
    scanf("%d", &difficulty);

    // Calculate random number
    srand(time(NULL));
    randnum = rand() % difficulty + 1;

    // Get user input
    do
    {
        printf("\nPlease type in your guess: ");
        scanf("%d", &guess);
        count++;

        if (guess < randnum)
            printf("\nRandom number is bigger!");
        else if (guess > randnum)
            printf("\nRandom number is smaller!");
    } while (guess != randnum);

    printf("\nYou have found the random number! It took you %d guesses.", count);
}