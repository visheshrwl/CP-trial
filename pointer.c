#include<stdio.h>
int main(){
    int a= 10, b= 56, *p1=&a, *p2=&b;

printf("Numbers Before you swap  %d %d\n", *p1 , *p2);
    *p1 = *p1+*p2;
    *p2 = *p1-*p2;
    *p1= *p1-*p2;
printf("After Swapping:\n %d %d", *p1, *p2);
return 0;
}