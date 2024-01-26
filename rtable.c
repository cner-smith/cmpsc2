/* 
Author: Conner Smith
Course: Computer Programming II
Program Summary: This program creates a table of numbers and their square roots. The user specifies the 
                 beginning number, ending number, and step size via command line arguments. It supports 
                 both positive and negative numbers, incrementing or decrementing through the range as
                 defined by the user. The square roots of negative numbers are displayed in the form of 
                 imaginary numbers (with an 'i' character).
Input: Command line arguments for starting number, stopping number, and step size.
Output: stdout (standard output), displaying the table of numbers and their square roots.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to print the number and its square root, handling negative numbers as imaginary
void printNumberAndSquareRoot(int number) {
    if (number < 0) {
        // For negative numbers, print the imaginary square root
        printf("%d, %.2fi\n", number, sqrt(abs(number)));
    } else {
        // For non-negative numbers, print the real square root
        printf("%d, %.2f\n", number, sqrt(number));
    }
}

// Entry point of the program
int main(int argc, char *argv[]) {
    // Check for the correct number of command line arguments
    if (argc != 4) {
        printf("Error: 3 numbers needed (start, stop, step) were not provided\n");
        return 1; // Return with error code
    }

    // Parse command line arguments
    int start = atoi(argv[1]);
    int stop = atoi(argv[2]);
    int step = atoi(argv[3]);

    // Determine if the loop parameters are valid and print the table accordingly
    if ((start <= stop && step > 0) || (start >= stop && step < 0)) {
        // Loop through the range from start to stop with the given step size
        for (int i = start; step > 0 ? i <= stop : i >= stop; i += step) {
            // Print each number and its square root
            printNumberAndSquareRoot(i);
        }
    } else {
        // If loop parameters are invalid, print an error message
        printf("Error: start, stop, and step do not produce a valid loop\n");
        return 1; // Return with error code
    }

    return 0; // Successful execution
}