/*
    Name: exercise_6.c
    Author: Levin Baenninger
    Date: 02.11.2023
    Version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Declaration
    float interest, capital, period, compound;

    // Input
    printf("What's the start capital? ");
    if (scanf("%f", &capital) != 1)
    {
        printf("Not a valid integer. Exit program...");
        return EXIT_FAILURE;
    }

    printf("What's the interest rate (in percent, e.g. 5)? ");
    if (scanf("%f", &interest) != 1)
    {
        printf("Not a valid integer. Exit program...");
        return EXIT_FAILURE;
    }

    printf("Investment period (in years): ");
    if (scanf("%f", &period) != 1)
    {
        printf("Not a valid integer. Exit program...");
        return EXIT_FAILURE;
    }

    // Calculations
    compound = capital * pow((1 + (interest / 100)), period);

    // Output
    printf("The compound interest is: %.2f", compound);
}