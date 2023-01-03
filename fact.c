#include<stdio.h>

int main(){
    int n, mul = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        mul = mul * i;
    }
    printf("%d", mul);
    return 0;
}