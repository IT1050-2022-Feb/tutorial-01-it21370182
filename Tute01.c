/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1 , mark2, total;
  float avg;

  printf("Enter marks for 1st Subject: ");
  scanf("%d",&mark1);
  printf("Enter marks for 2nd Subject: ");
  scanf("%d",&mark2);

  total=mark1+mark2;
  avg=total/2;

  printf("%.2f is average of your marks",avg);
  
  return 0;
}

