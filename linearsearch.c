#include<stdio.h>

#define A 10

int main(){
    int arr[A], del;

    int i, j;

    for (int i = 0; i < A; i++)
    {
        scanf("%d", arr[i]);
    }

    printf("Enter the element you want to delete");
    scanf("%d", &del);
    
    printf("Original array");
    for (int i = 0; i < A; i++)
    {
        printf("%d\t", arr[i]);
    }



}



//9 11 3 1 7 5 13 17 15