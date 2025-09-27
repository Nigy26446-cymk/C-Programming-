/*Name:Gabriel Kariuki
Reg No.CT101/G/26446/25
Description:Program to display loan application
*/

#include <stdio.h>

int main()
{
	int age;
	float income;
	
	printf("Welcome to our loan apllication instituition\n");
	printf("Enter your age");
	scanf("%d", &age);
	printf("Please enter your annual income (Sh.)");
	scanf("%f", &income);
	printf("Congratulations you qualify for a loan\n");
	
	if(age >= 21 && income >= 21000) {
	
	printf("You don't qyalify for a loan");
}	
	 
	else
{
	printf("Unfortunately we are unable to offer you a loan at this time\n");	
	}
	return 0;
}
