#include <stdio.h>

int main()
{
    int num;
    char str[100];

    /*
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number you entered is %d", num);
    */

    printf("Enter your full name: ");
    fgets(str, 100, stdin);
    printf("Your full name is %s", str);
}