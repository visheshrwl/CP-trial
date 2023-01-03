#include<stdio.h>

int main(int argc, char const *argv[])
{
    char s[] = "Hello World, Have a Great Day";
    int count = 0;
    

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == ' '){
            count++;
        }
    }

    printf("Number of words: %d\n", count+1);
    return 0;
}
