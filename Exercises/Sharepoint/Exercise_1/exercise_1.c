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
    float radius;
    const float PI = 3.14159;
    float area, circumfrence;

    printf("What is the radius of the circle? ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumfrence = 2 * radius;

    printf("\nThe area is: %.2f\n", area);
    printf("The circumfrence is: %.2f\n", circumfrence);
}