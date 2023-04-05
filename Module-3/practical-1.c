/*
 Write a Program to check the given year is leap year or not. 
*/
#include<stdio.h>
int main()
{
    int year;

    printf("\nEnter the year:");
    scanf("%d", &year);

     if(year % 4 == 0)
           printf("leap year");
     else
           printf("Not a leap year");      
}
