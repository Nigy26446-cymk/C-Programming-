/*
Name: Gabriel Kariuki
Reg No: CT101/G/26446/25
Decription: C Program to display the surfce area of a cylinder
*/

#include <stdio.h>

int main ()
{
	float radius;
	float pi = 3.142;
	float height;
	float surface_area;
	printf("Enter the the radius of the cylinder/n");
	scanf("%f", &radius);
	printf("Enter the height of the cylinder/n");
	scanf("%f", &height);
	
	surface_area = (2 * pi * radius * radius) + (2 * pi * radius * height);
	printf("The surface_area of the cylinder is %.3f/n", surface_area);
	
	return 0; 
}