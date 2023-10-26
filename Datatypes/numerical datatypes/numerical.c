#include <stdio.h>

int main() {
    short int shortInt = 1;
    unsigned short int unsignedShortInt = 2;
    int integer = 3;
    unsigned int unsignedInteger = 4;
    long int longInt = 5;
    unsigned long int unsignedLongInt = 6;
    long long int longLongInt = 7;
    unsigned long long int unsignedLongLongInt = 8;
    float floatNumber = 3.141592;
    double doubleNumber = 3.141592653589793;
    long double longDoubleNumber = 3.1415926535897932384;

    printf("%hd\n", shortInt);
    printf("%hu\n", unsignedShortInt);
    printf("%d\n", integer);
    printf("%u\n", unsignedInteger);
    printf("%ld\n", longInt);
    printf("%lu\n", unsignedLongInt);
    printf("%lld\n", longLongInt);
    printf("%llu\n", unsignedLongLongInt);
    printf("%f\n", floatNumber);
    printf("%lf\n", doubleNumber);
    printf("%Lf\n", longDoubleNumber);
}