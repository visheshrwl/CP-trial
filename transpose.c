#include<stdio.h>

int main(int argc, char const *argv[])
{
    int mat[3][3], matt[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            matt[i][j] = mat[i][j];
        }
    }
    
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", matt[i][j]);
        }
        printf("\n");
    }

    return 0;
}
