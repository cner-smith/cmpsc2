#include "quad.h"
#include "complex.h"
#include "real.h"

// Determines how to solve the quadratic equation
void solve_quad(int a, int b, int c) {
    if (b*b - 4*a*c < 0)
        solve_complex(a,b,c); // Solution has complex roots
    else
        solve_real(a,b,c); // Solution has real roots
}