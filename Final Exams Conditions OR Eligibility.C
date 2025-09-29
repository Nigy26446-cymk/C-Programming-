/*
NAME : Gabriel Kariuki
Reg No. : CT101/G/26446/25
Description : A Program To Check If A Student Is Eligible For For Final Exams
*/

#include <stdio.h>

int main() {
	
	float attendance;
	float Average_Marks;
	
	printf("Enter your class attendance/n");
	scanf("%f", &attendance);
	
	printf("Enter your Average Marks/n");
	scanf("%f", &Average_Marks); 
		
		if(attendance >= 75.0 && Average_Marks >= 40.0) {
	
    printf("Eligible for exams./n");
}
        else
{
    printf("NOT ELIGIBLE./n"); }
    
    return 0;
}