/*Q.4(a) Write a 'C' Program to compute the sum of all elements stored in an array using pointers.[June-2005, Set-1, Unit-3, Q.No.4]
Ans. :
Program computing sum of the array elements using pointers */
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10];
 int i,sum=0;
 int *p;
 printf("Enter 10 elements:\n");
 for(i=0;i<10;i++)
	scanf("%d",&a[i]);
 p=a;		   /* a=&a[0] */
 for(i=0;i<10;i++)
	{
	sum = sum + *p;	//*p=content pointed by 'p'
	p++;
	}
 printf("The sum of array elements is %d",sum);
}