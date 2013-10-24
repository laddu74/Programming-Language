/* This program displays sine of the angle */

#include<stdio.h>
#include<math.h>
int facto(int);
void main()
{
	int i,flag=0;
	double angle, answer;
	clrscr();
	printf("Enter the angle : ");
	scanf("%lf",&angle);
	angle = (angle*(22.0/7.0))/180.0;   /* conversion to radian */
	answer = angle;
	for(i=3;i<10;i=i+2)
	{
		if (flag==0)
		{
			answer = answer - pow(angle,i)/facto(i);
			flag=1;
		}
		else
		{
			answer = answer + pow(angle,i)/facto(i);
			flag=0;
		}
	}
	printf("%lf",answer);
	getch();
}
int facto(int n)
{
	int i, factorial=1;
	for(i=1; i<=n; i++)
	{
		factorial = factorial * i;
	}
	return(factorial);
}