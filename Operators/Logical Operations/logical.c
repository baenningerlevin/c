#include <stdio.h>

int main() {
    int num1 = 5, num2 = 5, num3 = 10;

    // Logical Operators
    (num1 == num2) && (num3 > num2); // 1
    (num1 == num2) && (num3 < num2); // 0

    (num1 == num2) || (num3 < num2); // 1
    (num1 != num2) || (num3 < num2); // 0

    !(num1 != num2); // 1
    !(num1 == num2); // 0
}