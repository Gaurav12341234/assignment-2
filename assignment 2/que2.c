//2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("number without its last digit is :%d",a/10);
    return 0;
}