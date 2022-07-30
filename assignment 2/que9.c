//9. Write a program to print size of an int, a float, a char and a double type variable.
#include<stdio.h>
int main()
{
    int a,x,y,z,p;
    char b;
    float c;
    double d;
    x=sizeof(a);
    y=sizeof(b);
    z=sizeof(c);
    p=sizeof(d);
    printf("size of int,char,float,double respectively are:%d %d %d %d",x,y,z,p);
    return 0;
}