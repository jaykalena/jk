/*
PYRAMID PROGRAM
1 
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
int main()
{
    int i, j, r=4, n=1;

    for(i=0; i<r; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%d ", n++);
        }
        printf("\n");
    }
}