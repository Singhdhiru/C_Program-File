/*print pattern 4 using loop
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=6;i++) this line responsible for how many row print in program
{
for(j=1;j<=i;j++) this for lopp responsible for print number
{
    printf("%d",j);
}
printf("\n");

}

}
this is not hard coding.if we want to take no of row frpm user.then we see next line of code.
*/
#include<stdio.h>
int main()
{

int i,j, rows;
printf("enter number of rows");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
 printf("\n");   


}
}