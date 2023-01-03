#include<stdio.h>

int main(){
    FILE *fp;
    char another = 'Y';

    struct students
    {
        char name[50];
        int marks;
    };
    struct students s;

    fp = fopen("record.txt", "w");

    while (another == 'Y' || another == 'y')
    {
        printf("\nEnter name and marks: ");
        scanf("%s %d", s.name, &s.marks);
        fprintf(fp, "%s %d\n", s.name, s.marks);
        printf("Add another record (Y/N)");
        fflush(stdin);
        scanf("%c", &another);
    }
    fclose(fp);
    return 0;

}