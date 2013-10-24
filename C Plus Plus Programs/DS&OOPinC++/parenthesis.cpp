/************************************************************
  Program for checking the well formedness of the parenthesis 
using stack as arrays.
*************************************************************/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include "d:\stack.h"
#define size 10

/*
 The main Function
 Input:none
 Output:none
 Called By:O.S.
 Calls:push,pop,stempty
*/
void main(void)
{
 char item;
 char ans,bracket[10];
 STK_CLASS obj;
 int i;
 clrscr();
 cout<<"\n\t\t Program for stack application using separate header file ";
 cout<<"\n Enter The expression and put $ at the end ";
 cin>>bracket;
 i=0;
 if(bracket[i]==')')
  cout<<"\n The expression is invalid ";
 else
 {
   do
   {
	while(bracket[i]=='(')
	{
	 obj.push(bracket[i]);
	 i++;
	}
	while(bracket[i]==')')
	{
	  item=obj.pop();
	  i++;
	}
 }while(bracket[i]!='$');
 if(!obj.stempty())
   cout<<"\n The expression is invalid";
 else
   cout<<"\n The expression has well formed parenthesis";
 }
 getch();
}
