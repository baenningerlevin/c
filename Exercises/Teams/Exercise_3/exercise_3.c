/*
    Name: exercise_3.c
    Author: Levin Baenninger
    Date: 27.10.2023
    Version: 1.0
*/

#include <stdio.h>

int main() {
    // Print sum of all numbers of the 9 series from 1 to 120
    // Declaring variables
    int i, sum = 0;

    for (i = 9; i <= 120; i += 9) {
        sum += i;
    }

    printf("%d", sum);
}