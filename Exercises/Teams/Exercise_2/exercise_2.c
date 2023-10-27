/*
    Name: Exercise_2.c
    Author: Levin Baenninger
    Date: 27.10.2023
    Version: 1.0
*/

#include <stdio.h>

int main()
{
    // Print all numbers of the 7 series which are smaller than 100
    // Declare variables
    int i;

    for (i = 7; i < 100; i +=7)
    {
        printf("%d\t", i);
    }
}