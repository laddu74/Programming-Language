/*Q.4 (b) Write a C program using pointers to read in an array of integers and print its elements in reverse order.[June-2005, Set-2, Unit-3, Q.No.-5]
Ans. :
Program to read integers into an array and reversing them using pointers.*/
#include<stdio.h>
#include<conio.h>
#define MAX 30
void main()
{
int size,i,arr[MAX];
int *ptr;
clrscr();
ptr=&arr[0];
printf("Enter the size of array: ");
scanf("%d",&size);
printf("\nEnter %d integers into array:\n",size);
for(i=0;i<size;i++)
{
scanf("%d",ptr);
ptr++;
}
ptr=&arr[size-1];
printf("\nElements of array in reverse order are:\n");
for(i=size-1;i>=0;i--)
{
printf("\nElement%d is %d :",i,*ptr);
ptr--;
}
getch();
}