/*
    Name: exercise_5.c
    Author: Levin Baenninger
    Date: 02.11.2023
    Version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaring Variables
    char string[200];
    int wordcount = 0, lettercount = 0, i;

    printf("Enter your string:\n");
    fgets(string, 200, stdin);

    // Wordcount and lettercount
    for (i = 0; string[i] != '\0'; i++)
    {
        lettercount++;
        if (string[i] == ' ')
        {
            wordcount++;
            lettercount--;
        }
    }

    printf("\nNumber of words in given string is: %d", wordcount + 1);
    printf("\nNumber of letters (without whitespaces) is: %d", lettercount - 1);
}