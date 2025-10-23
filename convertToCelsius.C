/*
Name : Gabriel Kariuki
Reg No. CT101/G/26446/25
Unit : Introduction to Programming and Problem Solving
Description : A C Program To Takes Distance Travelled in KM as Input and Returns the Total Fare 
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(f));
    return 0;
}