/*
NAME : GABRIEL KARIUKI
REG NO. : CT101/G/26446/25
DESCRIPTION : A C Program that uses do while loop to prompt the user to enter the correct password to log in
*/

#include <stdio.h>

int main() {
    
    int password;

    do {
        printf("Enter the password: ");
        scanf("%d", &password);
    } while (password != 1234);

    printf("Access Granted\n");

    return 0;

}
