#include<stdio.h>

int main(int argc, char const *argv[])
{
    int test[2][3][2];

    printf("Enter 12 values: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d", &test[i][j][k]);
            }
            
        }
        
    }
    printf("\n Displaying The Numbers\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d\t", test[i][j][k]);
            }
            
        }
        
    }
    return 0;
}
