#include<stdio.h>

int func(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num >>= 1;
    }
    return(count);
}

int main(int argc, char const *argv[])
{
    printf("%d", func(435));
    return 0;
}
