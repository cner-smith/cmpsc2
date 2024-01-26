/* 
Author: Conner Smith
Course: Computer Programming II
Program Summary: This program generates and displays a multiplication table. The range and increment
                 of the table are defined by the user, either through command line arguments or interactive
                 input. The program allows for a range from -N to N, where N is an integer between 0 and 10
                 (inclusive), and the increment is a positive integer. The table displays products of each
                 combination of numbers in the specified range and increment.
Input: Command line arguments for N and increment, or user input if arguments are not provided
Output: stdout (standard output), displaying the formatted multiplication table
*/

#include <stdio.h>

// Function to print an integer with consistent spacing
void print_int(int num) {
    if (num < 0) {
        printf("%-4d", num); // Negative numbers include '-' in their 4 character space
    } else {
        printf(" %-3d", num); // Positive numbers have an extra space for alignment
    }
}

int main(int argc, char *argv[]) {
    int N, inc;

    // Get N from user input or command line
    if (argc < 3) {
        do {
            printf("Enter N (0 to 10): ");
            scanf("%d", &N);
            if (N < 0 || N > 10) {
                printf("Error: N must be between 0 and 10.\n");
            }
        } while (N < 0 || N > 10);

        // Get increment from user input
        do {
            printf("Enter increment (positive number and a divisor of %d): ", N);
            scanf("%d", &inc);
            if (inc <= 0 || N % inc != 0) {
                printf("Error: Increment must be positive and a divisor of %d.\n", N);
            }
        } while (inc <= 0 || N % inc != 0);
    } else {
        // If using command line arguments, check the increment here as well
        if (inc <= 0 || N % inc != 0) {
            printf("Error: Increment must be positive and a divisor of %d.\n", N);
            return 1; // Exit the program if the increment is not valid
        }
    }

    // Begin printing the multiplication table
    // Print leading spaces for alignment
    printf("     ");

    // Print the column headers from -N to N
    for (int i = -N; i <= N; i++) {
        if (i == -N || i == 0 || i == N || (i % inc == 0 && i != -N)) {
            print_int(i);
        }
    }
    printf("\n");

    // Generate and print the multiplication table rows
    for (int i = -N; i <= N; i++) {
        if (i == -N || i == 0 || i == N || (i % inc == 0 && i != -N)) {
            print_int(i); // Print the row label
            for (int j = -N; j <= N; j++) {
                if (j == -N || j == 0 || j == N || (j % inc == 0 && j != -N)) {
                    print_int(i * j); // Print the product
                }
            }
            printf("\n");
        }
    }

    return 0;
}
