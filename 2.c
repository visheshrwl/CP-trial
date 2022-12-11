#include <stdio.h>
#include<math.h>

// Define the main function
int main() {
    // Prompt the user to enter a number
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (num <= 1) {
        // 0 and 1 are not prime
        printf("The number is not prime.\n");
    } else if (num <= 3) {
        // 2 and 3 are prime
        printf("The number is prime.\n");
    } else if (num % 2 == 0 || num % 3 == 0) {
        // Any number divisible by 2 or 3 is not prime
        printf("The number is not prime.\n");
    } else {
        // For any other number, check if it is divisible by any number up to its square root
        int i = 5;
        int max = (int) sqrt(num);
        while (i <= max) {
            if (num % i == 0 || num % (i + 2) == 0) {
                printf("The number is not prime.\n");
                return 0;
            }
            i = i + 6;
        }
        printf("The number is prime.\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
