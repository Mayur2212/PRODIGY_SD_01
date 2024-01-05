#include <stdio.h>

int main() {
    
    double temperature, convertedTempFahrenheit, convertedTempKelvin;
    char originalUnit;
    printf("Enter temperature value: ");

    scanf("%lf", &temperature);

    printf("Enter the original unit of measurement (C, F, or K): ");
        scanf(" %c", &originalUnit);

   
    switch (originalUnit) {
        case 'C':
        case 'c':
            convertedTempFahrenheit = (temperature * 9 / 5) + 32;
            convertedTempKelvin = temperature + 273.15;
            break;
        case 'F':
        case 'f':
            convertedTempFahrenheit = temperature;
            convertedTempKelvin = (temperature - 32) * 5 / 9 + 273.15;
            break;
        case 'K':
        case 'k':
            convertedTempFahrenheit = (temperature - 273.15) * 9 / 5 + 32;
            convertedTempKelvin = temperature;
            break;
        default:
            printf("Invalid unit of measurement. Please enter C, F, or K.\n");
            return 1; 
    }

    
    printf("Converted temperatures:\n");
    printf("%.2lf degrees Celsius\n", temperature);
        
        printf("%.2lf degrees Fahrenheit\n", convertedTempFahrenheit);
    printf("%.2lf Kelvin\n", convertedTempKelvin);



    return 0; 
}