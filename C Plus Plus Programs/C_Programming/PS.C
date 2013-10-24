/*Q.1 (c) Write a C program to evaluate the power series [June-2005, Set-3, Unit-1,Q.No.-35]
Ans.:
Program to evaluate the power series.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long float res=0.0;
float x;
int n,i;
clrscr();
printf("\nThe given series is 1+x+x^2+x^3+.....+x^n");
printf("\n");
printf("\nEnter the value of x between 0 & 1: ");
scanf("%f",&x);
if((0<x)&&(x<1))
{
printf("\nEnter the value of n: ");
scanf("%d",&n);
for(i=0;i<=n;i++)
res=res+pow(x,i);
printf("\nThe sum of the series upto power %d of x is: ",n);
printf("nE^x=%1f",res);
}
else
printf("\nx should lie between 0 and 1");
getch();
}