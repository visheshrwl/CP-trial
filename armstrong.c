#include<stdio.h>

int main(int argc, char const *argv[])
{
    int mul=1, rem, number,result = 0, cnt, count = 0;

    printf("Enter the number you want to check:");
    scanf("%d", &number);

    int q = number;
    while (q != 0)
    {
        q = q/10;
        count++;
    }
    cnt = count;
    q = number;

    while (q != 0)
    {
        rem = q % 10;
        while (cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }
    
    if (result == number)
    {
        printf("Entered number is armstrong\n");
    }
    else
    {
        printf("Entered number is not armstrong\n");
    }
    

    return 0;
}
