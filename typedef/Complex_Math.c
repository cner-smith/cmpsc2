#include <stdio.h>         // Include standard input and output library for printf and scanf
#include "complex.h"       // Include the definition for complex number structure
#include "Complex_Math.h"  // Include prototypes for complex number mathematical operations
#include "Complex_IO.h"    // Include prototypes for complex number input/output operations

// Adds two complex numbers and returns the result
complex Add_Complex(complex num1, complex num2){
    complex ans; // Declare a variable to store the result
    ans.real = num1.real + num2.real; // Sum the real parts
    ans.img = num1.img + num2.img;    // Sum the imaginary parts
    return ans; // Return the sum
}

// Subtracts the second complex number from the first and returns the result
complex Subtract_Complex(complex num1, complex num2){
    complex ans; // Declare a variable to store the result
    ans.real = num1.real - num2.real; // Subtract the real parts
    ans.img = num1.img - num2.img;    // Subtract the imaginary parts
    return ans; // Return the difference
}

// Multiplies two complex numbers and returns the result
complex Multiply_Complex(complex num1, complex num2){
    complex ans; // Declare a variable to store the result
    // Calculate the product of two complex numbers using the formula
    ans.real = num1.real * num2.real - num1.img * num2.img;
    ans.img = num1.real * num2.img + num1.img * num2.real;
    return ans; // Return the product
}

// Divides the first complex number by the second and displays the result
void Divide_Complex(complex num1, complex num2){
    complex numer, denom; // Declare variables for numerator, and denominator
    float ans_real, ans_img; // Temporary variables to hold the real and imaginary parts of the result
    // Multiply num1 by the conjugate of num2 to get the numerator
    numer = Multiply_Complex(num1, Conjugate_Complex(num2));
    // Multiply num2 by its conjugate to get the denominator
    denom = Multiply_Complex(num2, Conjugate_Complex(num2));
    // Calculate the real and imaginary parts of the answer
    ans_real = (float)numer.real / (float)denom.real;
    ans_img = (float)numer.img / (float)denom.real;

    printf("%.4f + %.4fi\n", ans_real, ans_img); // Directly print the result here with 4 decimal places
    
}

// Returns the conjugate of a complex number
complex Conjugate_Complex(complex num){
    complex ans; // Declare a variable to store the result
    ans.real = num.real;       // The real part remains the same
    ans.img = -1 * num.img;    // The imaginary part is negated
    return ans; // Return the conjugate
}

// Negates both the real and imaginary parts of a complex number and returns the result
complex Negate_Complex(complex num){
    complex ans; // Declare a variable to store the result
    ans.real = -1 * num.real; // Negate the real part
    ans.img = -1 * num.img;   // Negate the imaginary part
    return ans; // Return the negated number
}
