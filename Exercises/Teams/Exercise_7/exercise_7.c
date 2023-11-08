#include <stdio.h>

int main()
{
	// Declaration
	int year, month, day, resultScanf;
	char monthName[12][10] = {"Januar", "Februar", "Maerz", "April", "Mai", "Juni", "Juli", "August", "September", "Oktober", "November", "Dezember"};
	char daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	// Input
	do
	{
		printf("Für welches Jahr möchtest du den Kalender (in Ziffern)? ");
		resultScanf = scanf("%d", &year);

		// Clear the input buffer in case of non-numeric input
		while (getchar() != '\n')
			;

	} while (resultScanf != 1);

	// Output
	for (month = 1; month <= 12; month++)
	{
		// Print Month
		printf("\n\n%s", monthName[month - 1]);
		printf("\n----------------------------------------------------\n");

		// Loop through days
		// Check if february
		if (month == 2)
		{
			// Check for leap year
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				for (day = 1; day <= 29; day++)
				{
					printf("%d\t", day);

					if (day % 7 == 0)
					{
						printf("\n");
					}
				}
			}
			else
			{
				for (day = 1; day <= 28; day++)
				{
					printf("%d\t", day);

					if (day % 7 == 0)
					{
						printf("\n");
					}
				}
			}
		}
		// Every month other than february
		else
		{
			for (day = 1; day <= daysInMonth[month - 1]; day++)
			{
				printf("%d\t", day);

				if (day % 7 == 0)
				{
					printf("\n");
				}
			}
		}
	}
}
