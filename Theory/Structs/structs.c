/*
    Name: structs.c
    Author: Levin Baenninger
    Date: 08.11.2023
    Version: 1.0
*/

#include <stdio.h>
#include <string.h>

struct car
{
    char brand[30];
    char model[50];
    char color[20];
    int year;
    int numberDoors;
} car1;

int main()
{
    printf("What brand is your car? ");
    fgets(car1.brand, 30, stdin);

    printf("What model is your car? ");
    fgets(car1.model, 50, stdin);

    printf("What color is your car? ");
    fgets(car1.color, 20, stdin);

    printf("From what year is your car? ");
    while (scanf("%d", &car1.year) != 1)
    {
        // Clear input buffer
        while (getchar() != '\n')
            ;
        printf("Invalid input. Please enter a valid year: ");
    }

    printf("How many doors does your car have? ");
    while (scanf("%d", &car1.numberDoors) != 1)
    {
        // Clear input buffer
        while (getchar() != '\n')
            ;
        printf("Invalid input. Please enter a valid number of doors: ");
    }

    printf("\nBrand: %s", car1.brand);
    printf("Model: %s", car1.model);
    printf("Color: %s", car1.color);
    printf("Year: %d", car1.year);
    printf("\nNumber of doors: %d", car1.numberDoors);
}