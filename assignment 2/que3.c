//3. Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    printf("before swapping:\n a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping:\n a=%d b=%d",a,b);
    return 0;
}