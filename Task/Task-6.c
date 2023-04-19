#include <stdio.h>
 
int main()
{
    int i, j, k, r= 5;
 
    // first loop to print all rows
    for (i = 0; i < r; i++) 
    {
 
        // inner loop 1 to print white spaces
        for (k = 0; k < 1 * (r - i) - 1; k++) 
        {
            printf(" ");
        }
 
        // inner loop 2 to print numbers
        for (j = 0; j < 1 * i + 1; j++) 
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
    return 0;
}