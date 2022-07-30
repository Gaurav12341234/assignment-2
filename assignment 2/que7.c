//7. Write a program to find the position of first 1 in LSB
#include<stdio.h>
int main()
{
    int a,result,count=1;
    printf("Enter a number:");
    scanf("%d",&a);
    do
    {
        result=a&1;
        if(result==1)
            printf("The position of first 1 in LSB is %d",count);
        else
        {
            a=a>>1;
            count++;
        }
    } while (result==0);
    return 0;
}