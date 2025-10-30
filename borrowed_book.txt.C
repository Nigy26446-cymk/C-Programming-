/*
Name : Gabriel Kariuki
Reg No : CT101/G/26446/25
Unit : Introduction to programming and problem solving
Description : A C program that allows the librarian to enter book titles and store each title in a text file
named borrowed_books
*/


#include <stdio.h>

int main() {
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a"); // open in append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin); // read input with spaces

    fputs(title, fp); // write to file
    fclose(fp);

    printf("Book title successfully stored in borrowed_books.txt\n");
    return 0;
}