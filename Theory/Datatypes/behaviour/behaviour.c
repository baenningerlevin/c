#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int num = 3147483647;
    int character = 'a';
    short boolean = true;
    int num2 = 12.6;
    float floatNum = 12.6;
    double doubleNum = 12.6;

    // When a value of a variable is greater than its type range, it will overflow, hence the value will be reset to the minimum value of the type and continue to increment from there. The same applies to the opposite case.
    printf("%d\n", num); // -1147483649

    // When a wrong value is assigned to a wrong type of variable, the value will be converted to the type of the variable.
    printf("%c\n", character); // a
    printf("%d\n", boolean); // 1

    // When a float value is assigned to an integer variable, the value will be truncated.
    printf("%d\n", num2); // 12

    // Both float and double will be printed as 6 decimal places by default.
    printf("%f\n", floatNum); // 12.600000
    printf("%lf\n", doubleNum); // 12.600000

    // If you want to change the number of decimal places, you can use %.nf, where n is the number of decimal places.
    printf("%.2f\n", floatNum); // 12.60
    printf("%.10lf\n", doubleNum); // 12.6000000000
}