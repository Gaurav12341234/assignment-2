//8. Write a program to check whether the given number is even or odd using a bitwise 
//   operator.
#include<stdio.h>
int main()
{
    int a,result;
    printf("Enter a number:");
    scanf("%d",&a);
    result=a&1;
    if(result==0)
        printf("Even number");
    else
        printf("Odd number");
    return 0;
}