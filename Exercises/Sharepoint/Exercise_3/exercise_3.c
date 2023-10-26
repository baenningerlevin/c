/*
    Name: exercise_3.c
    Author: Levin Baenninger
    Date: 26.10.2023
    Version: 1.0
*/
#include <stdio.h>
#include <string.h>

int main()
{
    // Get Persons Fullname and output its initials
    char firstName[50], lastName[50];

    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("Your initials: %c%c\n", firstName[0], lastName[0]);

    return 0;
}