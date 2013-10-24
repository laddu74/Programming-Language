/*Q.5 Write a C program using pointers to implement a stack with all the operations.[June-2005, Set-1, Unit-6, Q.No.4]
Ans. :
program to implement stack with its operations using pointers.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 50

int size;

/* Defining the stack structure */
struct stack
{
	int AR[MAX];
	int top;
};

/* Initializing the stack(i.e., top=-1)   */
void init_stk(struct stack *st)
{
	st->top=-1;
}

/* Entering the elements into stack */
void push (struct stack *st,int num)
{
	if(st->top == size-1)
	{
	printf("\nStack overflow(i.e., stack full).");
	return;
	}
	st->top++;
	st->AR[st->top] = num;
}
	//Deleting an element from the stack.
int pop(struct stack *st)
{
	int num;
	if(st->top == -1)
	{
	printf("\nStack underflow(i.e., stack empty).");
	return NULL;
	}
	num=st->AR[st->top];
	st->top--;
	return num;
}
void display(struct stack *st)
{
	int i;
	for(i=st->top;i>=0;i--)
		printf("\n%d",st->AR[i]);
}
void main()
{
	int ele,opt,val;
	struct stack ptr;
	clrscr();
	init_stk(&ptr);
	printf("\nEnter Stack Size :");
	scanf("%d",&size);
	while(1)
	{
		printf("\n\n\tSTACK PRIMITIVE OPERATIONS");
		printf("\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.DISPLAY");
		printf("\n4.QUIT");
		printf("\n");
		printf("\nEnter your option : ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
			printf("\nEnter the element into stack:");
			scanf("%d",&val);
			push(&ptr,val);
			break;
			case 2:
			ele=pop(&ptr);
			printf("\nThe element popped from stack is : %d",ele);
			break;
			case 3:
			printf("\nThe current stack elements are:");
			display(&ptr);
			break;
			case 4:
			getch();
			exit(0);
			default:
			printf("\nEnter correct option!Try again.");
		}
	}
}