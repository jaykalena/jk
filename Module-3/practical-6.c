/*
Write a program to print the number in reverse order in c
*/

#include<stdio.h>
void main()
{
    int n,r,sum=0,t;

    printf("Input a number: ");
    scanf("%d",&n);

    for(t=n; n!=0; n = n/10)
    {
         r = n % 10;
         sum=sum*10+r;
    }
    printf("The number in reverse order is : %d \n",sum);
}