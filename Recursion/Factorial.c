//  *find the factorial of a number using loop and recursion method

//* using loops->>>>>>>>>>>>>>
// #include<stdio.h>
// int  factorial(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     printf("enter the number->");
//     scanf("%d",&n);
//     int ans = factorial(n);
//     printf("factorial of %d is %d",n,ans);
// }


//* using Recursion->>>>>>>>>>>>>>
#include<stdio.h>
int  factorial(int n){
    //  ->>  base cases
    if(n==0 || n==1) return 1;    
    // function call itself
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("enter the number->");
    scanf("%d",&n);
    int ans = factorial(n);
    printf("factorial of %d is %d",n,ans);
}