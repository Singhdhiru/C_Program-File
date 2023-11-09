// Ques : Print n to 1 using recursion

// 
#include<stdio.h>
int  factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("enter the number->");
    scanf("%d",&n);
    int ans = factorial(n);
    printf("factorial of %d is %d",n,ans);
}