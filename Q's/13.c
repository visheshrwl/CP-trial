#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char *s = "3.145";
    int a = 34;
    float f = atof(s);
    int i = atoi(s);
    long l = atol(s);
    char *b;
    printf("%f\n", f);
    printf("%d\n", i);
    printf("%lf\n", i);
    printf("%s\n", itoa(a, b, a));

    return 0;
}
