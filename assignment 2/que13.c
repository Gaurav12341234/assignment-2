//13. Write a program to take a three-digit number from the user and rotate its digits by 
//    one position towards the right.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a three-digit number:");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=(b*100)+a;
    printf("Rotate its digits by one position towards the right is:%d",c);
    return 0;
}