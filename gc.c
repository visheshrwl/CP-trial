#include<stdio.h>

struct students
{
    int roll_number;
    char name[50];
    int marks;
    char grade;
};

int main(){

    struct students s[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %s %d %c", &s[i].roll_number, s[i].name, &s[i].marks, &s[i].grade);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d %s %d %c", s[i].roll_number, s[i].name, s[i].marks, s[i].grade);
    }
    
    int fr;

    printf("Enter the roll number to find");
    scanf("%d", &fr);
    for (int i = 0; i < 3; i++)
    {
        if (fr != s[i].roll_number)
        {
            printf("Students Details are not found in the database");
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (fr  == s[i].roll_number)
        {
            printf("%d %s %d %c", s[i].roll_number, s[i].name, s[i].marks, s[i].grade);
        }
        
    }
    

    return 0;
}