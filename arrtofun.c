#include<stdio.h>

void display(int a);

int main(int argc, char const *argv[])
{
    int arr[] = {2,3,4};
    for (int i = 0; i <= 2; i++)
    {
        display(arr[i]);
    }
    return 0;
}

void display(int a){
    printf("%d", a);
}
