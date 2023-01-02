#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, search, first, last, middle;
    int arr[50];

    printf("Enter the no of elements in the array");
    scanf("%d", &n);

for (int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to search");
    scanf("%d", &search);

    first = 0;
    last = n-1;
    middle = (first + last)/2;
        while (first <= last)
        {
            if (arr[middle]< search)
            {
                first = middle + 1;
            }
            else if (arr[middle] == search)
            {
                printf("YES");
            }
            else {
                last = middle-1;
            }
            middle = (first + last) / 2;
        }

        if (first > last)
        {
            printf("Not Found");
        }
        
    return 0;
}
