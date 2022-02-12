/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
   float mark1,mark2,avg;
   float total = 0;

   printf("Enter mark 1: ");
   scanf("%f",&mark1);
   printf("Enter mark 2: ");
   scanf("%f",&mark2);

   total = mark1 + mark2;
   avg = total / 2;
   printf("Average mark : %.2f", avg);
  
  return 0;
}

