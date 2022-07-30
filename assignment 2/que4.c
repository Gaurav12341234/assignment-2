//4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a=40,b=50;
    printf("before swapping:\n a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping:\n a=%d b=%d\n",a,b);
    return 0;
}