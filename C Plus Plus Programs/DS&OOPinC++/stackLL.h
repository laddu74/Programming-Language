
/*************************************************************
                      The stack.h file
*************************************************************/
class STK_CLASS
{
 private:
/*Data structure for the linked stack*/
		typedef struct stack
		{
	  	char data;
	  	struct stack *next;
	}node;
	node *top;
 public:
	STK_CLASS();
	void Push(char Item);
	int Sempty();
	void Pop();

};
STK_CLASS::STK_CLASS()
{
 top=NULL;
}
/*Functionality performed on linkd stack*/
void STK_CLASS::Push(char Item)
{
	node *New;
	New = new node;
	if ( New == NULL )
	 cout<<"\nMemory Can not be allocated \n ";
	else
	{
	 New->data=Item;
	 New -> next = top;
	 top = New;
	}
}
/*
   The Sempty Function
   Input:any node for checking the empty condition
   Output:1 or 0 for empty or not condition
   called By:main
   Calls:none
*/
int STK_CLASS::Sempty()
{
 if(top==NULL)
  return 1;
 else
  return 0;
}
/*
----------------------------------------------------------
	The Pop function
	Input : The top of the stack
	Called By : main()
	Calls :none
----------------------------------------------------------
*/
void STK_CLASS::Pop()
{
	node *temp;
	temp =top;
	top = top -> next;
	delete temp;
}
