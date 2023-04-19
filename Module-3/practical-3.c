/*
 Write a program user enter the 5 subjects mark. You have to make a total and 
find the percentage. 
a) percentage > 75 you have to print “Distinction” 
b) percentage > 60 and percentage <= 75 you have to print “First class” 
c) percentage >50 and percentage <= 60 you have to print “Second class”
d) percentage > 35 and percentage <= 50 you have to print “Pass class” 
e) Otherwise print “Fail”
*/

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
   int maths, science, hindi, gujarati, history, total;
   float per; 

   printf("\nEnter the marks of Maths:");
   scanf("%d", &maths);

   printf("\nEnter the marks of Science:");
   scanf("%d", &science);

   printf("\nEnter the marks of Hindi:");
   scanf("%d", &hindi);

   printf("\nEnter the marks of Gujarati:");
   scanf("%d", &gujarati);

   printf("\nEnter the marks of History:");
   scanf("%d", &history);

   total = maths+science+hindi+gujarati+history;
   printf("\nTotal is %d", total);

   per = (total/5);
   printf("\nPercentage is %2f", per);

   if(per>75)
   {
      printf("\nDISTINCTION");
   }
   else if(per>60 && per<=75)
   {
      printf("\nFIRST CLASS");
   }
   else if(per>50 && per<=60)
   {
      printf("\nSECOND CLASS");
   }
   else if(per>35 && per<=50)
   {
      printf("\nTHIRD CLASS");
   }
   else
   {
      printf("\nSORRY!!!! YOU ARE FAIL IN EXAMINATION");
   }

   
}