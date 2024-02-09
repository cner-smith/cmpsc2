#include <stdio.h>        // Include standard input and output library for printf and scanf
#include "complex.h"      // Include the definition for complex number structure
#include "Complex_Math.h" // Include prototypes for complex number mathematical operations (not directly used here but may be included for completeness)
#include "Complex_IO.h"   // Include prototypes for complex number input/output operations

// Reads a complex number from the user input
complex Read_Complex(void){
    complex num; // Declare a variable of type complex to store the user input
    printf("Enter the real part: "); // Prompt the user to enter the real part of the complex number
    scanf("%d", &num.real); // Read the real part from user input
    printf("Enter the imaginary part: "); // Prompt the user to enter the imaginary part of the complex number
    scanf("%d", &num.img); // Read the imaginary part from user input
    return num; // Return the complex number entered by the user
}

// Writes a complex number to standard output
void Write_Complex(complex num){
    // Print the complex number in the format "real + imaginary i"
    if (num.img < 0) {
        // If the imaginary part is negative, print using minus sign
        printf("%d - %di \n", num.real, -num.img); // Note the negation of num.img to make it positive in the output
    } else {
        // If the imaginary part is positive or zero, print normally
        printf("%d + %di \n", num.real, num.img);
    }
}
