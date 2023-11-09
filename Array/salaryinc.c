// # using else if ladder find salary increment according to employee age.
#include <stdio.h>
int main()
{
    int age, salary;
    printf("enter salary and age of the employee");
    scanf("%d %d", &age, &salary);
    if (age > 50)
    {
        if (salary < 500)
        {
            salary = salary + 300;
            printf("salary=%d", salary);
        }
        else
        {
            salary = salary + 150;
            printf("salary=%d", salary);
        }
    }
    else
    {
        salary = salary + 30;
        printf("salary=%d", salary);
    }
    printf("\n ends program normally");
}