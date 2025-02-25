#include <stdio.h>

int main(void) {
    int choice;
    double temp, convertedTemp;

    printf("1: Celsius to Fahrenheit\n");
    printf("2: Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temp);
        convertedTemp = (temp * 9.0 / 5.0) + 32;
        printf("Temperature in Fahrenheit: %.2lf°F\n", convertedTemp);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temp);
        convertedTemp = (temp - 32) * 5.0 / 9.0;
        printf("Temperature in Celsius: %.2lf°C\n", convertedTemp);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
