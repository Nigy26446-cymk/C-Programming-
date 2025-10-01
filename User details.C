/*
NAME : Gabriel Kariuki
Reg No. : CT101/G/26446/25
Description : A C Program to the user their height,bank balance and phone number
*/

#include <stdio.h>

int main() {
	int phone_number;
	float height;
	double bank_balance;
	
	printf("Enter your phone_number\n");
	scanf("%d", &phone_number);
	printf("Your phone_number is %d\n", phone_number);
	
	printf("Enter your height(metres.)\n");
	scanf("%f", &height);
	printf("You are %.1f metres tall\n", height);
	
	printf("Enter your bank_balance(Ksh.)\n");
	scanf("%lf", &bank_balance);
	printf("Your bank_balance is %.2lf Ksh.\n", bank_balance);
	
    return 0;
}
