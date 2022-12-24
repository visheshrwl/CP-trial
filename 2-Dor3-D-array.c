#include<stdio.h>
const int CITY = 2;
const int WEEK = 7;
int main(int argc, char const *argv[])
{
    int temperature[CITY][WEEK];

    for (int i = 0; i < CITY; i++)
    {
        for (int j = 0; j < WEEK; j++)
        {
            printf("City %d , Day %d: \n", i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }

    printf("\n Displaying Result: \n\n\n");

    for (int i = 0; i < CITY; i++)
    {
        for (int j = 0; j < WEEK; j++)
        {
            printf("City %d, Day %d = %d\n", i+1, j+1, temperature[i][j]);
        }        
    }
    return 0;
}
