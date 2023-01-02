#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, q, rem, fact=1, result=0;

    printf("Enter the number you want to check\n");
    scanf("%d", &n);

    q = n;

    while (q != 0)
    {
        rem = q % 10;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q / 10;
    }
    
    if (result == n)
    {
        printf("Kadak hai bhai!!!");
    }
    else{
        printf("Bhgg bsdk\nisse kadak to chai hoti h!!!\nKyu h naa Sharma Ji?\n");
    }
    return 0;
}
