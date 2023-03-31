/* 
Write a program to make a square and cube of number. 
*/
#include<stdio.h>
int main()  // Main method
{
    int a; 

    printf("Enter a number : "); // pass the message to take user's 3 input
    scanf("%d", &a); // use to take user's input

    printf("Square of %d is %d\n", a, (a * a));
    printf("Cube of %d is %d\n", a, (a * a * a));
}