/*
 * Driver Menu System for Homework
 * Ryan Nock - Aug 30, 2021  <-- Please put your name/date here
 */

#include <stdio.h>   //header file for input/output - 
 // since you will place all your assigned functions (programs) in this file, you do not need to include stdio.h again!

int menu(void);   //prototype definition section
void hello(void);
void ascii(void);
void vol_measure(void);

int main(void)
{
    int selection = menu();

    while (selection != 99) {

        switch (selection) {

        case 1:
            hello();
            break;

        case 2:
            ascii();
            break;

        case 3:
            vol_measure();
            break;

        case 4:

            break;

        default:
            printf("Please enter a valid selection.\n");
        }

        selection = menu();
    }

    return 0;
}

int menu(void) {
    int choice;
    printf("***************************\n");
    printf(" 1. Hello \n");
    printf(" 2. ASCII to char \n");
    printf(" 3. Volume Measurements\n");
    printf(" 4. \n");
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    getchar();
    return choice;
}

void hello(void) {
    printf("Hello, World!!!\n");
}

void ascii(void) {

    // Variable to store ASCII code
    int code;

    // Ask for the ASCII code from the user and assign it to the code int
    printf("Enter an ASCII code:\n");
    scanf("%d", &code);

    // Assigns the letter to code this converts the int to a char
    char letter = code;

    // prints the the ASCII Id and what the char is like when stored on a computer
    printf("The ASCII code %d is the letter %c\n", code, letter);
}

void vol_measure(void) {

    /* Answer to question 8
    Measurements are not always a whole number so floats are necessary to help calculate nonwhole numbers.
    */

    // Creating variables
    float cups, cupToPint, cupToOz, ozToTb, tbToTs;

    // Asking for user input in cups
    printf("Enter the amount of cups you wish to convert\n");
    scanf("%f", &cups);

    // Variable conversions
    cupToPint = cups / 2;
    cupToOz = cups * 8;
    ozToTb = cupToOz * 2;
    tbToTs = ozToTb * 3;

    // Final Results 
    printf("%.2f cup(s) is %.2f Pint(s), %.2f Ounce(s), %.2f Tablespoon(s), %.2f Teaspoon(s)\n", cups, cupToPint, cupToOz, ozToTb, tbToTs);
}