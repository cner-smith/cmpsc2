#include "complex.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Solves quadratic equations with complex roots
void solve_complex(int a, int b, int c){
    float x_real, x_img;
    // Calculate the real and imaginary parts of the solutions
    x_real = -b/(2.0*a);
    x_img = sqrt(abs(b*b-4*a*c)) / (2*a);
    // Display the solutions
    printf("X = %f + %fi and %f - %fi\n", x_real, x_img, x_real, x_img);
}