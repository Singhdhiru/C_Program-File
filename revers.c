// reverse the number
#include<stdio.h>
int main()
{
int num,r,y=0;//y mai garbege valu nahi ho isliye 0 se intiallize kar diya
printf("enter a number before revers");
scanf("%d",&num);
while(num!=0)//while ko jab tak use karna hi jab tak number zero ke equal n ho jaye
{
r=num%10;//modular ka use reminder ko bachane ke liye kiya jata hi
y=y*10+r;
num=num/10;//divide ka use last digit ko khatm karne ke liya kiya jata hi
}
printf("revers number %d",y);//revers hone ke baad y mai restore ho raha hi
}