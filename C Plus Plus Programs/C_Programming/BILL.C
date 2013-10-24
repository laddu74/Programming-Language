/*Q.1 (b) An electric power distributioncompany charges its domestic consumers as follows:
	Consumption Units			Rate of Charge
	0-200					Rs.0.50 per unit
	201-400		Rs.100 plus Rs.0.65	per unit excess 200
	401-600		Rs.230 plus Rs.0.80	per unit excess of 400.
Write a C program that reads the customer number and power consumed and prints the amount to be paid by the customer. [Nov./Dec.-2005,Set-3, Unit-1, Q.No.-34]
Ans. : */
#include<stdio.h>
#include<conio.h>
void main()
{
int n, p;
float amount;
clrscr();
printf("Enter the customer number: ");
scanf("%d",&n);
printf("Enter the power consumed: ");
scanf("%d",&p);
if(p>=0 && p<=200)
	amount=p*0.50;
else if(p>200 && p<400)
	amount = 100+((p-200) * 0.65);
else if(p>400 && p<=600)
	amount = 230 + ((p-400) * 0.80);
printf("Amount to be paid by customer no. %d is Rs.:%5.2f.",n,amount);
getch();
}