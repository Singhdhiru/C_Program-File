// useing nasted do while to print number
#include<stdio.h>
int main()
{
//int i=1,j=3;
int i,j;
printf("enter i and j\n");
scanf("%d%d",&i,&j);
do
{
    do
    {
        printf("%d",--j);

    }
    while(j>0);
printf("%d",i++);
}
while(i<4);
    
    
}