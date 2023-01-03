#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number, q, rem, result=0;

    printf("Enter the number you want to check:-\n");
    scanf("%d", &number);

    q = number;

    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }
    
    if (result == number)
    {
        printf("Palindrome!!");
    }
    else{
        printf("Not Palindrome!!");
    }
    
    return 0;
}
