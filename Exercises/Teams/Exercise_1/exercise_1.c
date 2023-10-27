/*
    Name: exercise_1.c
    Author: Levin Baenninger
    Date: 27.10.2023
    Version: 1.0
*/

#include <stdio.h>

int main() {
    // Print all numbers from 1 to 100 in a table with 10 columns
    // Declare variables
    int i;

    // Print numbers
    for (i = 1; i <= 100; i++) {
        // Print new line every 10 numbers
        if (i % 10 == 1) {
            printf("\n");
        }
        
        // Print number
        printf("%d\t", i);
    }
}