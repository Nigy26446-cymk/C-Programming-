/*
Name : Gabriel Kariuki
Reg No. CT101/G/26446/25
Unit : Introduction to Programming and Problem Solving
Description : A C Program that that takes the  number of units consumed as input and returns the total bill amount
*/

#include <stdio.h>

float calculateElectricBill(int units) {
    float bill;

    if (units <= 100)
        bill = units * 10;
    else if (units <= 200)
        bill = (100 * 10) + (units - 100) * 15;
    else
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;

    return bill;
}

int main() {
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Total Bill = KSh. %.2f\n", calculateElectricBill(units));
    return 0;
}