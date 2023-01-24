//# swap two number using third variable(kichen rule)
/*#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter two number");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("a=%d,b=%d",a,b);
}
//swap two number without using third variable.
#include<stdio.h>
int main()
{
int a,b;
printf("enter two number ");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d,b=%d",&a,&b);
}*/
#include<stdio.h>
int main()
{
int x, y;
printf("Input value for x & y: \n");
scanf("%d%d",&x,&y);
printf("Before swapping the value of x & y: %d %d",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("\nAfter swapping the value of x & y: %d %d",x,y);
return 0;
}

