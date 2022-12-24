#include<stdio.h>

int main(){
    //TO FIND AVERAGE OF N NUMBERS USING ARRAY
    int str[100], sum=0 ,n;
    double average;
    printf("Enter the number of elements\t");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter no. %d element\t", i+1);
        scanf("%d", &str[i]);

        sum += str[i];
    }
    average = (double) sum / n ;
    printf("Average is %.2lf", average);
    return 0;
}