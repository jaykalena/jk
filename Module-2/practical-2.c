/*
 Write a program to find the simple Interest & Compound Interest. 
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float  p, r, t, SI, CI;

    printf("\nEnter the Principle:");
    scanf("%f", &p);

    printf("\nEnter the Rate:");
    scanf("%f", &r);

    printf("\nEnter the Time:");
    scanf("%f", &t);

    SI= (p*r*t)/100;
    CI= p * (pow(1+r/100, t)-1);

    printf("\nSimple Interest is %f", SI);
    printf("\nCompound Interest is %f", CI);
}