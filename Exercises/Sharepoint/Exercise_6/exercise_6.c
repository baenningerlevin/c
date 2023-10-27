/*
    Name: exercise_6.c
    Author: Levin Baenninger
    Date: 26.10.2023
    Version: 1.0
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num, pow2, pow3, pow4;

    printf("Type in an integer: ");
    scanf("%d", &num);

    pow2 = pow(num, 2);
    pow3 = pow(num, 3);
    pow4 = pow(num, 4);

    printf("%d to the power of 2 is: %d\n", num, pow2);
    printf("%d to the power of 3 is: %d\n", num, pow3);
    printf("%d to the power of 4 is: %d\n", num, pow4);
}