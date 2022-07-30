//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
//    convert it into USD.
#include<stdio.h>
int main()
{
    float a=76.23,b;
    printf("Enter the amount in INR:");
    scanf("%f",&b);
    b=b/a;
    printf("The amount in USD is :%.2f",b);
    return 0;
}