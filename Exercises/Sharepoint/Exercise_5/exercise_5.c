/*
    Name: exercise_5.c
    Author: Levin Baenninger
    Date: 26.10.2023
    Version: 1.0
*/
#include <stdio.h>

int main()
{
    // Convert Celsius to Fahrenheit
    // Declaring Variables
    int celsius;
    float fahrenheit;

    // Getting input from user
    printf("Angabe in Celsius: ");
    scanf("%d", &celsius);

    // Calculating fahrenheit
    fahrenheit = celsius * 1.8 + 32;

    // Printing results
    printf("%d Grad Celsius sind %.0f Grad Fahrenheit", celsius, fahrenheit);
}