/*
Name : Gabriel Kariuki
Reg No. CT101/G/26446/25
Unit : Introduction to Programming and Problem Solving
Description : A C Program To Converts Temperature From Fahrenheit To Degrees Celcius 
*/

#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;  // 50 KSh per km
}

int main() {
    float distance;
    printf("Enter distance (km): ");
    scanf("%f", &distance);

    printf("Total Fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}