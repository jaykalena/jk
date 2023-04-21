/*
PYRAMID PROGRAM
****
***
**
*
*/
#include<stdio.h>
int main()
{
    int i, j, r=4;
 
    // first loop for printing all rows
    for (i = 0; i < r; i++) 
    {

        // first inner loop for printing white spaces
        for (j = 0; j < 2 * i; j++) 
        {
            printf(" ");
        }

        // second inner loop for printing star *
        for (int k = 0; k < r - i; k++) 
        {
            printf("* ");
        }
        printf("\n");
    }    
    
}