//using for loop print half pyramid
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)// this loop decide to hight of pyramid
{
for(j=1;j<=i;j++)//this loop actually print star 
{
printf("*");

}
printf("\n");
}
}