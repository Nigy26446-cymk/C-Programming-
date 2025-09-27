/*
Name: Gabriel Kariuki
Reg No: CT101/G/26446/25
Decription: C Program to display the surfce area of a cylinder
*/

#include <stdio.h>

int main () {
 float radius;
 float pi = 3.142;
 float height;
 float volume;
 printf("Enter the radius of the cylinder/n");
 scanf("%f", &radius);
 
 printf("Enter the height of the cylinder/n");
 scanf("%f", &height);
 
 volume = pi * radius * radius * height;
 
 printf("The volume of the cylinder is %f/n", volume);
 
 	return 0; 
}
