/*
    Name: exercise_1.c
    Author: Levin Baenninger
    Date: 26.10.2023
    Version: 1.0
*/

#include <stdio.h>

int main()
{
    // Area and circumference of a circle
    // Declaring Variables
    float radius;
    const float PI = 3.14159;
    float area, circumfrence;

    // Getting input from user
    printf("What is the radius of the circle? ");
    scanf("%f", &radius);

    // Calculating area and circumfrence
    area = PI * radius * radius;
    circumfrence = 2 * radius;

    // Printing results
    printf("\nThe area is: %.2f\n", area);
    printf("The circumfrence is: %.2f\n", circumfrence);

    return 0;
}