//using els if ladder find grade of student
#include<stdio.h>
int main()
{
int marks;
printf("enter marks of student ");
scanf("%d",&marks);
if(marks>=80 && marks<100)
printf("this type of student present in a grade");
if(marks>=70 && marks<80)
printf("this typ of student present in b grade");
if(marks>=60 && marks<70)
printf("this type of student present in c grade");
if(marks<60 && marks>=30)
printf("this type of student present in d grade");
if(marks<30)
printf("these student are fail and team member contect to child parents");
printf("\n");
printf("happy with result");
}