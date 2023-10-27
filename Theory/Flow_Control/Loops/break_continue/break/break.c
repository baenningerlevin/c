// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates

#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 10)
    {
        if (i == 4)
        {
            break;
        }
        printf("%d\n", i);
        i++;
    }

    return 0;
}