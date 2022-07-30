//11. Write a program to input a number from the user and also input a digit. Append a 
//    digit in the number and print the resulting number. (Example - number=234 and 
//    digit=9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
   int no,dig;
   printf("Enter a number=");
   scanf("%d",&no);
   printf("Enter a digit=");
   scanf("%d",&dig);
   no=(no*10)+dig;
   printf("The resulting number is=%d",no);
   return 0;
}