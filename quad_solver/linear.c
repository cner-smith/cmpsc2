#include "linear.h"
#include <stdio.h>

// Solves linear equations of the form bx + c = 0
void solve_linear(int b, int c) {
    float x;
    x = -c/(float) b; // Calculate the solution
    printf("X is %f\n", x); // Display the solution
}