/*
NAME : GABRIEL KARIUKI
REG NO. : CT101/G/26446/25
DESCRIPTION : A C Program displaying bank ATM withdrawals
*/

#include <stdio.h>

int main() {
    float balance = 1000.00; // Initial balance
    float withdrawal;

    while (balance > 0) {
        printf("Current balance: Ksh.%.2f\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);
        if (withdrawal <= balance) {
            balance -= withdrawal;
        } else {
            printf("Insufficient funds.\n");
        }
    }
    printf("Final balance: Ksh.%.2f\n", balance);
    return 0;
}