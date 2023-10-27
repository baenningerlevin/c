/*
    Name: exercise_5.c
    Author: Levin Baenninger
    Date: 26.10.2023
    Version: 1.0
*/
#include <stdio.h>

int main()
{
    int celsius;
    float fahrenheit;

    printf("Angabe in Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("%d Grad Celsius sind %.0f Grad Fahrenheit", celsius, fahrenheit);
}