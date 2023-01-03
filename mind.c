#include<stdio.h>

int response;
char qq;
int low = 1, high = 100, mid;

int main(){
while(1){
    mid = (high + low) /2;
    printf("%d is in your mind?", mid);
    printf("Press 0 if no and 1 if yes");
    scanf("%d", &response);
    if (response == 1)
    {
        goto label;
    }
    if (response == 0)
    {printf("Is your number greater than or less than %d?", mid);
        fflush(stdin);
        scanf("%c", &qq);
        if(qq == '<')
        {
            high =mid;
        }
        else if (qq == '>')
        {
            low = mid;
        }
        else{
            printf("Error hai bsdk");
            goto label2;
        }
    }
}
label: printf("\n Number in mind is %d", mid);
label2:
return 0;
}