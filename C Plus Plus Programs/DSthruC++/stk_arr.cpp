#include<iostream.h>
#include<conio.h>
#define MAX 10
// Create a generic stack class
template <class Type>
class stack
{
	 Type st[MAX]; // the stack elements
	 int top; // top of stack
	 public:
	 void init()
	 {
		top = 0;
	 } // initialise stack
	 int size()
	 {
		return top;
	 }
	 void push(Type ch); // push object on stack
	 Type pop(); // pop object from stack
};
/*
---------------------------------------------------------------
Push function
---------------------------------------------------------------
*/
template <class Type>void stack<Type>::push(Type item)
{
	if (top==MAX)
	{
	 cout << "Stack is full\n";
	 return;
	}
	st[top] = item;
	top++;
}
/*
--------------------------------------------------------------
Pop function
--------------------------------------------------------------
*/
template <class Type>Type stack<Type>::pop()
{
	if (top==0)
	{
	 cout << "Stack is empty\n";
	 return 0; // return null on empty stack
	}
	top--;
	return st[top];
}
/*
------------------------------------------------------------
The main function
------------------------------------------------------------
*/
void main()
{
 // Demonstrate character stack
 stack <char> s1;
 stack <int> s2;
 char ch_item;
 int int_item;
 double dbl_item;
 int i;
// clrscr();
// initialise the stacks
 s1.init();
 s2.init();
 cout<<"Enter the char item to be pushed"<<endl;;
 cin>>ch_item;
 s1.push(ch_item);
 s1.push('p');
 s1.push('q');
 s1.push('r');
 cout<<"Enter the int item to be pushed"<<endl;
 cin>>int_item;
 s2.push(int_item);
 s2.push(20);
 s2.push(30);
 cout << "Pop from stack of characters: "<<endl;
 for (i=0; i<4; i++)
 cout<<"  "<<s1.pop() << "\n";
 cout << "Pop from stack of integers: "<<endl;
 for (i=0; i<3; i++)
  cout<<"  "<<s2.pop() << "\n";
  // demonstrate double stack
 stack<double> ds1;
 // initialise stack
 ds1.init();
 ds1.push(1.1);
 ds1.push(1.2);
 ds1.push(1.3);
 cout<< "Pop from stack of doubles: "<<endl;
 for (i=0; i<3; i++)
 cout<<"  "<< ds1.pop() << "\n";
}


