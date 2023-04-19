/*
 Write a Program to check the given number is prime or not prime.
*/
#include<stdio.h>
int main()
{
    int n, i;

    printf("\n enter the number you have to check=");
    scanf("%d", &n);

    for(i=2; i <= n-1; i++)
    {
        if(n%i==0)
        {
            printf("\nthe entered number is not prime");
            break;
        }
    }    
        if(i==n)
        {
            printf("\nthe entered number is prime");
        }    
}