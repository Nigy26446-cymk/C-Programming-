/*
NAME : Gabriel Kariuki
Reg No. : CT101/G/26446/25
Description : A C Program displaying different internet data bundle offers,prompting the user to enter their choice
*/

#include <stdio.h>

int main() {
	 
	 int choice;
	 
	 printf("Select your choice:\n");
	 printf("1. 100 MB at KES 50\n");
	 printf("2. 500 MB at KES 200\n");
	 printf("3. 1 GB at KES 350\n");
	 printf("4. 2GB at KES 600\n");
	 
	 printf("Please your choice(1-4):\n");
	 scanf("%d", &choice);
	 
	 // Switch statement
	 switch(choice) {
	 
	 case 1:
	 printf("You selected 100 MB.Cost = KES 50\n");
	 break;
 
	 case 2:
	 printf("You selected 500 MB.Cost = KES 200\n");
	 break;
 
	 case 3:
	 printf("You selected 1 GB.Cost = KES 350\n");
	 break;
 
	 case 4:
	 printf("You selected 2 GB.Cost = KES 600\n");
	 break;
 
	 default:
	 printf("Invalid choice\n");
	 }
	 
	 return 0;
	 
	 
}