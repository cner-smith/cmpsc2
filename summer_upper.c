/* 
Author: Conner Smith
Course: Computer Programming II
Program Summary: This program calculates and displays the sum of the first 100 positive integers 
                 and then the sum of the first 25 negative integers.
Input: None
Output: stdout
*/

#include <stdio.h>

int main(void) {
    int sum_up = 0; // Variable to store the sum of positive integers
    int sum_down = 0; // Variable to store the sum of negative integers
    int i;

    // Loop to calculate the sum of the first 100 positive integers
    for (i = 1; i <= 100; i++) {
        sum_up = sum_up + i;
    }
    printf("Sum of the first 100 positive integers: %d\n", sum_up);

    // Loop to calculate the sum of the first 25 negative integers
    for (i = -1; i >= -25; i--) {
        sum_down = sum_down + i;
    }
    printf("Sum of the first 25 negative integers: %d\n", sum_down);

    return 0;
}
