#include <stdio.h>

// user-defined data type
struct Student
{
    // these three items are called members
    int roll_number;
    float marks;
    char name[20];
};

int main()
{
    // these are compiel time intializaation
    struct Student S1 = {12, 30.5, "John"};
    printf("Roll number: %d\n", S1.roll_number);
    printf("Marks: %.2f\n", S1.marks);
    printf("Name: %s\n", S1.name);
    struct Student S2 = {15, 89.9, "dhiraj"};
    // we are not compare S1 > S2 this is wrong method
    if (S1.marks > S2.marks)
    {
        printf("keepwork hard");
    }
    else
    {
        printf("well done S1");
    }
    printf("\n");
    // we want to paste all value of S1 to new variable
    struct Student S3;
    S3 = S1;
    printf("all info of S3-> \n");
    printf("%d\n", S3.roll_number);
    printf("%2f\n", S3.marks);
    printf("%s\n", S3.name);

    // run time intailizaton
    struct Student S4;
    printf("enetr the s4 information - >\n");
    scanf("%d", &S4.roll_number);
    scanf("%2f", &S4.marks);
    scanf("%s", &S4.name);
    if (S1.marks > S4.marks)
    {
        printf("keepwork hard S4");
    }
    else
    {
        printf("well done S4");
    }
}
