/*
    Name: save_files.c
    Author: Levin Baenninger
    Date: 08.11.2023
    Version: 1.0
*/

#include <stdio.h>
#include <string.h>

struct Car
{
    char brand[30], model[50], color[20];
    int year, numberDoors;
};

// Function prototypes
// void printCar(struct Car car);
void getBrand(struct Car *car);
void getModel(struct Car *car);
void getColor(struct Car *car);
void getYear(struct Car *car);
void getNumberDoors(struct Car *car);
void printCar(struct Car car);
void saveCar(struct Car car);

int main()
{
    // Declaration
    struct Car car1;

    // Input
    getBrand(&car1);
    getModel(&car1);
    getColor(&car1);
    getYear(&car1);
    getNumberDoors(&car1);

    // Output
    printCar(car1);
    saveCar(car1);
}

// Link with ptr to original struct
void getBrand(struct Car *car)
{
    // Modify year with stdin
    printf("What brand is your car? ");
    scanf("%[^\n]s", &car->brand);
    fflush(stdin);
}

void getModel(struct Car *car)
{
    printf("What model is your car? ");
    scanf("%[^\n]s", &car->model);
    fflush(stdin);
}

void getColor(struct Car *car)
{
    printf("What color is your car? ");
    scanf("%[^\n]s", &car->color);
    fflush(stdin);
}

// Link with ptr to original struct
void getYear(struct Car *car)
{
    printf("From which year is your car? ");

    // Modify year with stdin
    while (scanf("%d", &car->year) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Invalid Input. Please enter a valid year: ");
    }
}

void getNumberDoors(struct Car *car)
{
    printf("How many doors does your car have? ");
    while (scanf("%d", &car->numberDoors) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Invalid Input. Please enter a valid year: ");
    }
}

void printCar(struct Car car)
{
    printf("\nBrand: %s", car.brand);
    printf("\nModel: %s", car.model);
    printf("\nColor: %s", car.color);
    printf("\nYear: %d", car.year);
    printf("\nNumber of doors: %d", car.numberDoors);
}

void saveCar(struct Car car)
{
    FILE *fptr = fopen("C:\\Users\\U60949\\Repository\\C_Programming\\Theory\\Save_Files\\car.csv", "a");
    fprintf(fptr, "%s;%s;%s;%d;%d;", car.brand, car.model, car.color, car.year, car.numberDoors);
    fclose(fptr);
}