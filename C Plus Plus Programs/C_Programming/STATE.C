/*Q.3 (b) Write a C program to accept records of the different states using array of structures. The structure should contain char state, population, literacy rate, and income. Display the state whose literacy rate is highest and whose income is highest.[June-2005, Set-3, Unit-4, Q.No.-11]
Ans. :
Problem to display the highest literate rate and the highest income of a state using array of structures*/
#include<stdio.h>
#include<conio.h>
#define M 50
struct state
{
	char name[50];
	long int populat;
	float lit_rate;
	float income;
}st[M];	 /* array of structure */
void main()
{
	int i,n,ml,mi,maxlrate, maxinc;
	float rate;
	ml=mi=-1;
	maxlrate=maxinc=0;
	clrscr();
	printf("\nEnter how many states:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\nEnter state %d details :",i);
	printf("\n\nEnter state name : ");
	scanf("%s",&st[i].name);
	printf("\nEnter total population : ");
	scanf("%ld",&st[i].populat);
	printf("\nEnter total literary rate : ");
	scanf("%f",&rate);
	st[i].lit_rate=rate;
	printf("\nEnter total income : ");
	scanf("%f",&st[i].income);
	}
	for(i=0;i<n;i++)
	{
	if(st[i].lit_rate>=maxlrate)
	{
	maxlrate=st[i].lit_rate;
	ml++;
	}
	if(st[i].income>maxinc)
	{
	maxinc=st[i].income;
	mi++;
	}
	}
	printf("\nThe state whose literary rate is the highest : %s",st[ml].name);
	printf("\nThe state whose income is the highest : %s",st[mi].name);
	getch();
}