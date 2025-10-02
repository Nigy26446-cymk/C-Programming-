/*

Name : Gabriel Kariuki
Reg No. CT101/G/26446/25
Description : A C Program to display charges charged to customers b ya water company depending on the water consumption rules
*/

#include <stdio.h>

int main() {
	
	int units;
	float bill;
	
	printf("Enter the number of water units consumed:\n");
	scanf("%d", &units);
	
	if(units >= 0 && units <= 30) {
		bill = units * 20;
		printf("Your total bill is %.2f KES\n", bill);
	}
	else if(units >=31 && units <=60) {
		bill = units * 25;
		printf("Your total water bill is %.2f KES\n", bill);
	}
	else if(units > 60) {
		bill = units * 30;
		printf("Your total water bill is %.2f KES\n", bill);
	}
	else {
		printf("Invalid input.\n");
		
		return 1;
	}
	
	return 0;
}

