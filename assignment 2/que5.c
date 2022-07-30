//5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter three-digit number:");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a+b+c;
    printf("The sum of the digits is %d",d);
    return 0;
}
