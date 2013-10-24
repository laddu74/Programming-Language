/*	The program demonstrates various operations such as creation, insertion, deletion, search and display on singly 		link lists.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define	  TRUE 	1
#define   FALSE 0

typedef struct singly_link_list
{
	int data;
	struct singly_link_list *next;
}node;

node *create();
/*
————————————————————————————————————————————————————————————
	The main function
	Input : None
	Output: None
	Parameter Passing Method : None
	Called by : OS
————————————————————————————————————————————————————————————
*/
void main()
{
	/* Local declarations */
	int  choice, val;
	char ans;
	node *head;
	void display(node *);
	node *search(node *,int);
	void insert(node *);
	void dele(node **);
	head = NULL;
	do
	{
	  clrscr();
	  printf("Program to Perform Various operations on Linked List");
		printf("\n1.Create");
	  printf("\n2.Display");
	  printf("\n3.Search for an item");
	  printf("\n4.Insert an element in a list");
	  printf("\n5.Delete an element from list");
	  printf("\n6.Quit");
	  printf("\nEnter Your Choice ( 1-6) ");
	  scanf("%d",&choice);
          switch( choice)
	   {
			case 1:	head = create();
					break;
			case 2: display(head);
					break;
			case 3: printf("Enter the element you want to search :");
					scanf("%d", &val);
					search(head, val);
					break;
			case 4:	insert(head);
					break;
			case 5:	dele(&head);
					break;
			case 6:	exit(0);
					default: clrscr();
					printf("Invalid Choice, Try again");
					getch();
		   }
		   printf("\nPress any key to continue...");
		   getch();
	 } while(choice != 6);
}
/*———————————————————————————————————————————————————————————
	The create function
	Input :None
	Output:Returns a pointer to the list
	Parameter Passing Method : None
—————————————————————————————————————————————————————————————
*/
node*  create()
{

	node *temp, *New, *head;
	int   val, flag;
	char ans='y';
	node *get_node();
	temp = NULL ;
	flag = TRUE; /* flag to indicate whether a new node
			 is created for the first time or not */
	do
	{
		printf("\nEnter the Element :");
		scanf("%d", &val);
		/* allocate new node */
		New =get_node();
		if ( New == NULL )
			printf("\nMemory is not allocated");
		New -> data  = val ;
		if ( flag ) /* Executed only for the first time */
		{
			head = New;
			temp = head; /*head is a first node in the list*/
			flag = FALSE;
		}
		else
		{
			/* temp keeps track of the most recently
			   created node */
			temp ->next = New;
			temp = New;
		}
	printf("\nDo you Want to enter more elements?(y/n) :");
	ans=getche();
	}while(ans=='y');
	printf("\nThe Singly Linked List is created\n");
	return head;
}
node *get_node()
{
 node *temp;
 temp=( node *) malloc( sizeof(node) );
 temp->next=NULL;
 return temp;
}

/*
—————————————————————————————————————————————————————————————
	The display function
	Input :Address of the first node of the list
	Output:Displays the Linked List
	Parameter Passing Method : call by value
	Called by main
	Calls : None
—————————————————————————————————————————————————————————————
*/
void  display(node *head)
{
	node *temp ;
	temp = head;
	if ( temp == NULL )
	{
		printf("\nThe list is empty\n");
		getch(); clrscr();
		return;
	}
	while ( temp != NULL )
	{
		printf(" %d -> ", temp->data );
		temp = temp -> next;
	}
	printf("NULL");

}
/*
——————————————————————————————————————————————————————————————
	The search function
	Input : Address of the starting node and the element which is to be searched
	Output:Searches for the Element in list
		   If found returns pointer to that node
		   otherwise NULL.
	Parameter Passing Method : call by value
	Called by:main
	Calls : None
——————————————————————————————————————————————————————————————
*/
node*  search(node *head, int key)
{
	node *temp;
	int found;

	temp = head;
	if ( temp == NULL )
	{
		printf("The Linked List is empty\n");
		getch();
		clrscr();
		return NULL;
	}
	found = FALSE;
	while ( temp != NULL && !found)
	{
		if ( temp->data != key)
		   temp = temp -> next;
		else
		   found = TRUE;
	}
	if ( found )
	{
	   printf("\nThe Element is present in the list\n");
	   return temp;
	}
	else
	{
	   printf("The Element is not present in the list\n");
	   return NULL;
	}
}
/*
—————————————————————————————————————————————————————————————
	The insert function
	Input :Address of starting node of the list
	Output:inserts an element into the list
	Parameter Passing Method : call by value
	Called By:main
	Calls : search()
—————————————————————————————————————————————————————————————
*/
void insert(node *head)
{
	node *temp, *New ;
	int  val;

	temp = head;
	if ( temp == NULL )
	{
		printf("\nInsertion is not possible\n");
		return;
	}
	   clrscr();
	   printf("\nEnter the Element after which you want to insert?: ");
	   scanf("%d", &val);
	   temp = search(head,val);
	   if (temp != NULL )
	{
		 printf("\nEnter the Element which you want to insert : ");
		 scanf("%d", &val);
		 New = (node*) malloc(sizeof(node));
		 if ( New == NULL )
			printf("Memory is not allocated\n");
		  New->data = val;
		  New->next = NULL;
		  New->next = temp->next;
		  temp -> next = New;
		  printf("\nThe Element is inserted\n");
	}
}

/*
—————————————————————————————————————————————————————————————
	The get_prev function
	Input :address of starting node and element to be searched
	Output:Looks for the element in list
		   If found returns pointer to the previous node
		   otherwise NULL.
	Parameter Passing Method : call by value
	Called By : dele()
	Calls : None
—————————————————————————————————————————————————————————————
*/
node*  get_prev(node *head, int val)
{
	node *temp, *prev ;
	int	flag;

	temp = head;
	if ( temp == NULL )
		return NULL;
	flag = FALSE;
	prev = NULL;
	while ( temp != NULL && !flag)
	{
		if ( temp->data != val)
		{
		   prev = temp;
		   temp = temp -> next;
		}
		else
		   flag = TRUE;
	}
	if ( flag )/*if flag is true*/
	   return prev;
	else
	   return NULL;
}

/*
————————————————————————————————————————————————————————————
	The dele function
	Input :Address of the starting node of the list
	Output:deletes the desired element from the list
	Parameter Passing Method : call by value
	Calls : search(), get_prev()
————————————————————————————————————————————————————————————
*/

void dele(node **head)
{
	node *temp,*prev ;
	int  key;

	temp = *head;
	if ( temp == NULL )
	{
		printf("\nThe list is empty\n");
		getch();
		clrscr();
		return ;
	}
	clrscr();
	printf("\nEnter the Element you want to delete: ");
	scanf("%d", &key);
	temp = search(*head,key);
	if ( temp != NULL )
	{
		prev = get_prev(*head,key);
		if ( prev != NULL )
		{
		   prev -> next = temp->next;
		   free (temp);
		}
		else
		{
		   *head = temp ->next;
		   free(temp);
		}
		printf("\nThe Element is deleted\n");
	}

}

