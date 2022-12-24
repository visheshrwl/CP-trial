#include<stdio.h>

int main(int argc, char const *argv[])
{
    int c = 100;
    int *p = &c;

    printf("%d\n", *p);

    int d, *pd;
     pd  = &d;
     printf("%d", *pd);

    int* pa, a;
   
   a = 22;
   printf("Address of a: %p\n", &a);
   printf("Value of a: %d\n\n", a);
   
   pa = &a;
   printf("Address of pointer pa: %p\n", pa);
   printf("Content of pointer pa: %d\n\n", *pa); 
   
   a = 11;
   printf("Address of pointer pa: %p\n", pa);
   printf("Content of pointer pa: %d\n\n", *pa);
   
   *pa = 2;
   printf("Address of c: %p\n", &pa);
   printf("Value of c: %d\n\n", a);
    return 0;
}
