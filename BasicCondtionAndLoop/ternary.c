/*# example of ternary operator 1;
we can replace ternary operator is a if else statement
#include<stdio.h>
int main()
{
int age;//variable declaration
printf("enter a age");
scanf("%d",&age); // take input form keyboard
(age>=18)?printf("you can vote now"): printf("not eligible for vote");
}
# example no 2; */
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    (num>0)? printf("postive number"):printf("negtive number");
} 