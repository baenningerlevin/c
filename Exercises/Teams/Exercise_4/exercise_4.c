/*
    Name: exercise_4.c
    Author: Levin Baenninger
    Date: 27.10.2023
    Version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Number guessing game
    // Declaring Variables
    int randnum, guess, count;

    // Calculate random number
    randnum = rand() % 1000 + 1;

    // Get user input
    printf("Welcome to the number guessing game! Please type in your first guess: ");
    scanf("%d", &guess);
    count++;

    while (guess != randnum)
    {
        if (guess < randnum)
        {
            printf("\nRandom number is bigger!");
        }
        else if (guess > randnum)
        {
            printf("\nRandom number is smaller!");
        }
        else
        {
            printf("\nNot a valid number!");
            count--;
        }

        count++;
        printf("\nPlease type in your next guess: ");
        scanf("%d", &guess);
    }

    printf("\nYou have found the random number! It took you %d guesses.", count);
}