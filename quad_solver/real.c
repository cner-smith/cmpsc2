#include "real.h"
#include <stdio.h>
#include <math.h>

// Solves quadratic equations with real roots
void solve_real(int a, int b, int c) {
    float x1, x2;
    // Calculate the solutions using the quadratic formula
    x1 = (-b + sqrt(b*b-4*a*c)) / (2*a);
    x2 = (-b - sqrt(b*b-4*a*c)) / (2*a);
    // Display the solutions
    printf("X = %f and %f\n", x1, x2);
}