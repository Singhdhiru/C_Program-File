// making of simple calculator using c
#include<stdio.h>
int main()
{
    int a,b,add,sub,divi,multi;
    char operator;
    printf("eneter operator");
    scanf("%c",&operator);
    printf("enter two number a and b \n");
    scanf("%d %d",&a,&b);
    switch(operator)
    {
        case'+':
        add=a+b;
        printf("add=%d",add);
        break;
        case'-':
        sub=a-b;
        printf("sub=%d",sub);
        break;
        case'*':
        multi=a*b;
        printf("multi=%d",multi);
        break;
        case'/':
        divi=a/b;
        printf("divi=%d",divi);
        break;
        default:
        printf("invalid choice");
        }     

}