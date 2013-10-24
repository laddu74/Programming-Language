/* This program displays the Pascal's triangle */

#include<stdio.h>

int facto(int);
void main()
{
	int i,n,k,r, answer;
	clrscr();
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	for(n=0; n<r;n++)
	{
		for(i=0;i<=r-n;i++)
		printf("   ");
		for(k=0; k<=n;k++)
		{
		  answer = facto(n)/(facto(k)*facto(n-k));
		  printf("%d     ",answer);
		}
	  printf("\n");

	}
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