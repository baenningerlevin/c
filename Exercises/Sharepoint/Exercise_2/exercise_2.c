/*
    Name: exercise_2.c
    Author: Levin Baenninger
    Date: 26.10.2023
    Version: 1.0
*/

#include <stdio.h>

int main() {
    // Calculate Area of a Triangle
    float baseline, height, area;

    printf("What is the length of the baseline? ");
    scanf("%f", &baseline);
    printf("What is the length of the height? ");
    scanf("%f", &height);

    area = baseline * height / 2;

    printf("\nThe area is: %.2f\n", area);

    return 0;
}