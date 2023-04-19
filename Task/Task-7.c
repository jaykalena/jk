#include <stdio.h>
 
int main()
{
    int i, j, k, r = 5;

    for (i = 0; i < r; i++) 
    {
        for (k = 0; k < 1 * (r + i) + 1; k++) 
        {
            printf(" ");
        }
        for (j = 0; j < r - i; j++) 
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
}
