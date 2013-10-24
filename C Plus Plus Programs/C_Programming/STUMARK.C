/*Q.2 The annual examination is conducted for 50 students for three subjects. Write a program to read the data and determine the following:
(a) Total marks obtained by each student.
(b) The highest marks in each subject and the Roll No. of the student who secured it.
(c) The student who obtained the highest total marks.       [Nov./Dec.-2005, Set-3, Unit-2, Q.No.-12]
Ans. :
	Program to read, print name and other details of 50 students?*/
#include<stdio.h>
#define S 50
struct student
  {
	char name[30];
	int rollno;
	int sub[3];
};
void main()
{
int i,j,max,count,total,n,a[S],ni;
struct student st[S];
clrscr();
printf("Enter how many students: ");
scanf("%d",&n);

  /* for loop to read the names and roll numbers*/
for(i=0;i<n;i++)
{   printf("\nEnter name and roll number for student %d : ",i);
	scanf("%s",&st[i].name);
	scanf("%d",&st[i].rollno);
}
	/* for loop to read ith student's jth subject*/
for(i=0;i<n;i++)
{
	for(j=0;j<=2;j++)
	{   printf("\nEnter marks of student %d for subject %d : ",i,j);
		scanf("%d",&st[i].sub[j]);
	}
}
   /* (i) for loop to calculate total marks obtained by each student*/
   for(i=0;i<n;i++)
	{
	 total=0;
	 for(j=0;j<3;j++)
	  {
		total=total+st[i].sub[j];
	  }
	  printf("\nTotal marks obtained by student %s are %d\n",st[i].name,total);
	  a[i]=total;
	}
	  /* (ii) for loop to list out the student's roll numbers who have secured the highest marks in each subject*/
	  /*roll number who secured the highest marks*/
	for(j=0;j<3;j++)
	  {
		max=0;
		for(i=0;i<n;i++)
		{
			if(max<st[i].sub[j])
			{
			max = st[i].sub[j];
			ni = i;
			}
		}
		printf("\nStudent %s got maximum marks = %d in Subject : %d" , st[ni].name, max, j);
	   }
	   max =0;
	   for(i=0;i<n;i++)
	   {
		if(max< a[i])
			{
			 max =a[i];
			 ni =i;
			}
	   }
	   printf("\n%s obtained the total highest marks.",st[ni].name);
 getch();
 }