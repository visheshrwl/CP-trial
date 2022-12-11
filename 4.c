#include <stdio.h>

// Define the main function
int main() {
    // Prompt the user to enter four numbers
    int num1, num2, num3, num4;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Find the greatest number
    int max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    if (num4 > max) max = num4;

    // Print the greatest number
    printf("The greatest number is %d.\n", max);

    // Return 0 to indicate successful execution
    return 0;
}
