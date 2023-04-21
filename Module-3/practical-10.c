/*
 Write a program to sort the array of 5 elements
*/
#include<stdio.h>
int main()
{
    
    int a[5]= {12,5,10,9,7};
    int temp, i, j;

    printf("Before Sorting ");

    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++) 
        { 
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
     printf("\nAfter Sorting ");

     for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}