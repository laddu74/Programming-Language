/*************************************************************************
Program for creating the stack using the linked list.
Program performs all the operations such as push,pop and
display.It takes care of stack underflow condition.There can not
be stack full condition in stack using linked list.
*************************************************************************/
#include <iostream.h>
#include <conio.h>
#include<stdlib.h>
//Declaration for data structure of linked stack
template <class T>
class Lstack
{
 private:
 typedef struct stack
 {
	T data;
	struct stack *next;
 }node;
 node *top,*New;
 public:
 Lstack()
 {
   top=NULL;
 }
 void create(),remove(),show();
 void Push(node **);
 void Display(node **);
 void Pop(node **);
 
};

/*
--------------------------------------------------------------------------
The create function
--------------------------------------------------------------------------
*/
template <class T>
void Lstack <T>::create()
{
  
  Push(&top);
}
/*
--------------------------------------------------------------------------
The remove function
--------------------------------------------------------------------------
*/
template <class T>
void Lstack <T>::remove()
{
 if(top==NULL)
   cout<<"\n stack underflow!";
 else
   Pop(&top);
	
}
/*
--------------------------------------------------------------------------
The show function
--------------------------------------------------------------------------
*/
template <class T>
void Lstack <T>::show()
{
	Display(&top);
}


/*
-----------------------------------------------------------------
	The Push function
------------------------------------------------------------------
*/
template <class T>
void Lstack <T>::Push(node **top)
{
	New = new node;
    New->next=NULL;
	cout<<"\nEnter the item";
	cin>>New->data;
	New -> next = *top;
    *top = New;
}
/*---------------------------------------------------------------
	The Pop function
----------------------------------------------------------------
*/
template <class T>
void Lstack <T>::Pop(node **top)
{
	node *temp;
	cout<<"\nThe popped item is "<<(*top) ->data;
	temp = *top;
	*top = (*top) -> next;
	delete temp;
	
}
/*
-----------------------------------------------------------------
	The Display function
-----------------------------------------------------------------
*/
template <class T>
void Lstack <T>::Display(node **head )
{
	node *temp ;
	temp = *head;
	if(temp==NULL)
	 cout<<"\n The stack is empty!";
	else
	{
	 while ( temp != NULL )
	 {
	  cout<<"  "<<temp-> data;
	  temp = temp -> next;
	 }
	}
}
/*
-------------------------------------------------------------
	The main function
--------------------------------------------------------------
*/
void main ( )
{
	int choice;
	char ans='y';
	Lstack <int> Ist;
	cout<<"\n\t\t Stack Using Linked List";
	while(ans='y')
	{
	  cout<<"\n\n The main menu";
	  cout<<"\n1.Push\n2.Pop\n3.Display";
	  cout<<"\n Enter Your Choice";
	  cin>>choice;
	  switch(choice)
	  {
	   case 1:Ist.create();
			  break;
	   case 2:Ist.remove();
			  break;
	   case 3:Ist.show();
		      break;
	   default:exit(0);
	  }
	  cout<<"\n Do you want to continue?";
	  ans=getche();

	}
  
}
