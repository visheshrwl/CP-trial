#include <stdio.h>

// Define the main function
int main() {
    // Initialize the first two numbers in the series
    int a = 0;
    int b = 1;

    // Print the first two numbers in the series
    printf("%d %d ", a, b);

    // Loop for the remaining numbers in the series
    for (int i = 0; i < 30; i++) {
        // Calculate the next number in the series
        int c = a + b;

        // Print the next number in the series
        printf("%d ", c);

        // Update the previous numbers
        a = b;
        b = c;
    }

    // Return 0 to indicate successful execution
    return 0;
}
