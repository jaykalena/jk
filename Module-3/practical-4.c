/*
 Write a program of to find out the Area of Triangle, Rectangle and Circle using Switch Case .(Must Be Menu Driven) 
*/
#include<stdio.h>
int main()
{
    int expression;
    float area;
    int b,h,w,r;

    printf("\n1.Triangle\n2.Rectangle\n3.Circle");
    printf("\nEnter the choice");
    scanf("%d", &expression);
    
    switch(expression)
    {
        case 1:
                printf("\nEnter the value of base:");
                scanf("%d", &b);

                printf("\nEnter the value of height:");
                scanf("%d", &h);

                area = (1/2)*b*h; 

                printf("\nThe Area of Triangle is %2f", area);
                break;

        case 2:
                printf("\nEnter the value of width:");
                scanf("%d", &w);

                printf("\nEnter the value of height:");
                scanf("%d", &h);

                area = w*h;

                printf("\nThe Area of Triangle is %2f", area);
                break;

        case 3:
                printf("\nEnter the value of radius:");
                scanf("%d", &r);

                area = (22/7) * r*r;

                printf("\nThe Area of Circle is %2f", area);
                break;
    }
        
} 

