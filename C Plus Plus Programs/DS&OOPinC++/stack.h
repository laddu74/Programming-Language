#define size 10
class STK_CLASS
{
	
	private:
	/* stack structure*/
	struct stack {
		  char s[size];
		  int top;
		 }st;
	public:
		STK_CLASS();
		void push(char item);
		int stfull();
		int stempty();
		char pop();

};
STK_CLASS::STK_CLASS()
{
 st.top=-1;
}

/*
 The push Function
 Input:item which is to be pushed
 Output:none-simply pushes the item onto the stack
 Called By:main
 Calls:none
*/
void STK_CLASS::push(char item)
{
 st.top++;
 st.s[st.top] =item;
}
/*
 The stempty Function
 Input:none
 Output:returns 1 or 0 for stack empty or not
 Called By:main
 Calls:none
*/
int STK_CLASS::stempty()
{
 if(st.top==-1)
  return 1;
 else
  return 0;
}
/*
 The stfull Function
 Input:none
 Output:returns 1 or 0 for stack full or not
 Called By:main
 Calls:none
*/
int STK_CLASS::stfull()
{
 if(st.top==size)
  return 1;
 else
  return 0;
}

/*
 The pop Function
 Input:none
 Output:returns the item which is popped from the stack
 Called By:main
 Calls:none
*/
char STK_CLASS::pop()
{
 char item;
 item=st.s[st.top];
 st.top--;
 return(item);
}
