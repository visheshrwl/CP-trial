#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    char b;
    long int c;
    float d;
    double e;
    long double f;
    int y;
    int x = 22;
    y = sizeof(x++);
    printf(" %i \n %i \n", x, y);
    printf(" %lu \n %lu \n %lu \n %lu \n %lu \n %lu\n", sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e), sizeof(f));
    return 0;
}
