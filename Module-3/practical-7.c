/*
Write a program make a summation of given number
*/
#include <stdio.h>
 void main()
{
  int x,y;
  int sum = 0;
 
  printf("Enter a number to add digits:");    
  scanf("%d",&x);

  int n = x;
 
  while(x>0)    
  {    
    y = x % 10;    
    sum = sum + y;    
    x = x / 10;    
  }   
   printf("Sum of digits of %d = %d", n,sum);    
}