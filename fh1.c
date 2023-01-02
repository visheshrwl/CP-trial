#include<stdio.h>

int main(){

    struct emp1
    {
        char name[40];
        int age;
        float bs;
    };
    struct emp1 e1;

    union emp2
    {
        char name[40];
        int age;
        float bs;
    };
    union  emp2 e2;


    printf("Memory size occupied by data in union: %d\n", sizeof(e2));
    printf("Memory size occupied by data in struct: %d\n", sizeof(e1));
    return 0;
}