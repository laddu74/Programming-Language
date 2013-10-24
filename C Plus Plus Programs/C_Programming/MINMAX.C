/*Q.1 (b) Write a program to find the maximum and minimum of given numbers. [June-2005, Set-2, Unit-1, Q.No.-17]
Ans. :
Program to find maximum and minimum of given numbers.*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,val,min,max=0;
  printf("Enter how many numbers you want to enter:");
  scanf("%d",&n);
  printf("\nEnter the %d numbers:\n",n);
  scanf("%d",&val);  /* Accept in the first element */
  min=val;	/* Assuming it as minimum */
  if(val>=max) /* Assigning the largest value to max.*/
	max=val;
  for(i=1;i<n;i++) /* For-loop for remaining n-1 elements.*/
  {
	scanf("%d",&val); /* Only one block to find max and min simultaneously. */
	if(val>max)
		max=val;
	if(val<min)
		min=val;
  }
  printf("\nThe maximum of given %d numbers is: %d",n,max);
  printf("\n");
  printf("\nThe minimum of given %d numbers is:%d",n,min);
  getch();
}