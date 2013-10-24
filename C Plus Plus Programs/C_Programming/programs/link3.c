#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <stdlib.h>
#include <alloc.h>
/*Declaration for data structure of linked stack*/
typedef struct stack
{
	int	data;
	struct stack *next;
}node;
/*
——————————————————————————————-
	The main function
	Input :None
	Output:None
	Parameter Passing Method :None
	Called By : The O.S.
	Calls : Push,Pop,Sempty,Display
———————————————————————————————
*/
void main()
{
	/* Local declarations */
	node *top;
	int data,item,choice;
	char ans,ch;
	void Push(int , node **);
	void Display(node **);
	int Pop(node **);
	int Sempty(node *);
	clrscr();
	top = NULL;
	printf("\n\t\t Stack Using Linked List");
	do
	{
	printf("\n\nThe main menu");
	printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
	printf("\nEnter Your Choice : ");
	scanf("%d",&choice);
		switch(choice)
		{
		case 1:  do
				{
				printf("\nEnter the data : ");
				scanf("%d", &data);
				Push(data,&top);
				printf("Do you want to continue?");
				ans =getche();
				getch();
				} while(ans =='Y' ||ans =='y');
				break;
		case 2:	if(Sempty(top))
				{
					printf("\nstack underflow!");
				}
				else
				{
					item = Pop(&top);
					printf("\nThe popped node is : %d",item);
				}
				break;
		case 3:	Display(&top);
				break;
		case 4:	exit(0);
				break;
		}
	printf("\nPress any key to continue...");
	getch();
	clrscr();
  }	while(choice != 4);

}

/*
————————————————————————————————-
	The Push function
	Input : The Item, top
	Output: None, inserts item and modifies stack and top
	Parameter Passing Method :By Value, by reference
	Called By : main()
	Calls :get_node()
—————————————————————————————————
*/
void Push(int Item, node **top)
{
	node *New;
	node * get_node(int);

	New = get_node(Item);
	New -> next = *top;
   *top = New;
}
/*
——————————————————————————————————
  The get_node Function
  Input:the item for which the node has
		to be allocated
  Output:the newly allocated node
  Parameter Passing Method:By value
  Called By:Push
  Calls:none

——————————————————————————————————
*/
node * get_node( int item )
{
	node * temp;
	temp =(node *) malloc(sizeof(node) );
	if ( temp == NULL )
	 printf("\nMemory Can not be allocated \n");
	temp -> data = item;
	temp -> next = NULL;
	return( temp);
}
/*
   The Sempty Function
   Input:any node for checking the empty condition
   Output:1 or 0 for empty or not condition
   called By:main
   Calls:none
*/
int Sempty(node *temp)
{
 if(temp ==NULL)
  return 1;
 else
  return 0;
}
/*
———————————————————————————————-
	The Pop function
	Input : The top of the stack
	Output: Returns the item at the top
	Parameter Passing Method :By Reference
	Called By : main()
	Calls :none
————————————————————————————————
*/
int Pop(node **top)
{
	int	item;
	node *temp;
	item = (*top) ->data;
	temp = *top;
	*top = (*top) -> next;
	free(temp);
	return(item);
}
/*
————————————————————————————————-
	The Display function
	Input : The top node of the stacki.e head
	Output: Displays data in the stack
	Parameter Passing Method : By Reference
	Called By : main
	Calls : None
————————————————————————————————-
*/
void Display(node **head )
{
	node *temp ;
	temp = *head;
	if(Sempty(temp))
	 printf("\nThe stack is empty!");
	else
	{
	 while ( temp != NULL )
	 {
	  printf("%d\n",temp-> data);
	  temp = temp -> next;
	 }
	}
}


