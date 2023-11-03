/*
    Name: exercise_7.c
    Author: Levin Baenninger
    Date: 02.11.2023
    Version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, i, j;

    // Get userinput
    printf("For what year do you want to print the Calendar? ");
    if (scanf("%d", &year) != 1)
    {
        printf("Not a valid year. Exit program...");
        return EXIT_FAILURE;
    }

    for (i = 1; i <= 12; i++)
    {
        switch (i)
        {
        case 1:
            printf("\nJanuar\n");
            for (j = 1; j <= 31; j++)
            {
                printf("%d\t", j);

                if (j % 7 == 0)
                {
                    printf("\n");
                }
            }
            break;

        case 2:
            printf("\nFebruar\n");
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            {
                for (j = 1; j <= 29; j++)
                {
                    printf("%d\t", j);

                    if (j % 7 == 0)
                    {
                        printf("\n");
                    }
                }
                printf("\n");
            }
            else
            {
                for (j = 1; j <= 28; j++)
                {
                    printf("%d\t", j);

                    if (j % 7 == 0)
                    {
                        printf("\n");
                    }
                }
            }

        case 3:
            printf("\nMaerz\n");
            for (j = 1; j <= 31; j++)
            {
                printf("%d\t", j);

                if (j % 7 == 0)
                {
                    printf("\n");
                }
            }
            break;

        case 4:
            printf("\nApril\n");
            for (j = 1; j <= 30; j++)
            {
                printf("%d\t", j);

                if (j % 7 == 0)
                {
                    printf("\n");
                }
            }
            break;

        case 5:
            printf("\nMai\n");
            for (j = 1; j <= 31; j++)
            {
                printf("%d\t", j);

                if (j % 7 == 0)
                {
                    printf("\n");
                }
            }
            break;

        case 6:
            printf("\nJuni\n");
            for (j = 1; j <= 30; j++)
            {
                printf("%d\t", j);

                if (j % 7 == 0)
                {
                    printf("\n");
                }
            }
            break;

        case 7:
            printf("\nJuli\n");
            for (j = 1; j <= 31; j++)
            {
                printf("%d\t", j);

                if (j % 7 == 0)
                {
                    printf("\n");
                }
            }
            break;

        case 8:
            printf("\nAugust\n");
            for (j = 1; j <= 31; j++)
            {
                printf("%d\t", j);

                if (j % 7 == 0)
                {
                    printf("\n");
                }
            }
            break;

        case 9:
            printf("\nSeptember\n");
            for (j = 1; j <= 30; j++)
            {
                printf("%d\t", j);

                if (j % 7 == 0)
                {
                    printf("\n");
                }
            }
            break;

        case 10:
            printf("\nOktober\n");
            for (j = 1; j <= 31; j++)
            {
                printf("%d\t", j);

                if (j % 7 == 0)
                {
                    printf("\n");
                }
            }
            break;

        case 11:
            printf("\nNovember\n");
            for (j = 1; j <= 30; j++)
            {
                printf("%d\t", j);

                if (j % 7 == 0)
                {
                    printf("\n");
                }
            }
            break;

        case 12:
            printf("\nDezember\n");
            for (j = 1; j <= 31; j++)
            {
                printf("%d\t", j);

                if (j % 7 == 0)
                {
                    printf("\n");
                }
            }
            break;
        }

        printf("\n");
    }
}