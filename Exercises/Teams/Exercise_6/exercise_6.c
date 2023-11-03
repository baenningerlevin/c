/*
    Name: exercise_6.c
    Author: Levin Baenninger
    Date: 02.11.2023
    Version: 1.1
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Declaration
    float interest, startCapital, targetCapital, period;

    // Input
    printf("What's the start capital? ");
    if (scanf("%f", &startCapital) != 1)
    {
        printf("Not a valid integer. Exit program...");
        return EXIT_FAILURE;
    }

    printf("What's your target capital? ");
    if (scanf("%f", &targetCapital) != 1)
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


    // Calculations
    while (startCapital <= targetCapital) {
        startCapital = startCapital * (1 + (interest / 100));
        period++;
    }

    // Output
    printf("\nTo make more than %.0f$, it will take about %.0f years", targetCapital, period);
}