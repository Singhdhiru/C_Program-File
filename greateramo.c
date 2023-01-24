//# use elseif ladder(greater among three number)
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a is gretar among three number");
if(b>a && b>c)
printf("b is gretar among three number");
if(c>a && c>b)
printf("c is gretar among three number");
}