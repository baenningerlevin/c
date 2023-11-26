#include <stdio.h>

int main()
{
    int i = 0;
    int num = 10;

    while (i < 10)
    {
        
        if (i == 4)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }

    printf("%d", num);
}