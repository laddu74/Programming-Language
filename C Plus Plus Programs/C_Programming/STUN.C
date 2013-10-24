/*Q.3(b) Write a program to use structure within union. Display the contents of structure elements. [June-2005, set-1, Unit-4, Q.No.18]
Ans. :*/
	#include<stdio.h>
	#include<conio.h>
void main()
	{
		struct student
		 {
			 char name[30];
			 char sex;
			 int rollno;
			 float percentage;
		 };
		union details
		 {
			 struct student st;
		 };
		 union details set;
		 clrscr();
		 printf("Enter details:\n");
		 printf("Enter name: ");
		 scanf("%s", set.st.name);
		 printf("Enter rollno: ");
		 scanf("%d", &set.st.rollno);
		 flushall();
		 printf("Enter sex: ");
		 scanf("%c",&set.st.sex);
		 printf("Enter percentage: ");
		 scanf("%f",&set.st.percentage);
		 clrscr();
		 printf("The student details are:\n");
		 printf("Name : %s", set.st.name);
		 printf("\nRollno : %d", set.st.rollno);
		 printf("\nSex : %c", set.st.sex);
		 printf("\nPercentage : %f", set.st.percentage);
getch();
}