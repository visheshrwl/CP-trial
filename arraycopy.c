#include<stdio.h>

int main(){
    int arr1[10], arr2[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\n\n\tEntered array is :- \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr1[i]);
    }
    
    for (int i = 0; i < 10; i++){
        arr2[i] = arr1[i];
    }
    printf("\n\n\tCopied array is :-\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr2[i]);
    }
    return 0;
}