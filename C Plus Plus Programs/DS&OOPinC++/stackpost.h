/*************************************************************
		stackpost.h file for postfix expression evaluation
*************************************************************/
#define MAX 10
class STK_CLASS
{
	/*declaration of stack data structure*/
struct stack
	{
      double   s[MAX];
	  int  top;
	}st;
	public:
		STK_CLASS();
		void push(double val);
		double pop();
};
STK_CLASS::STK_CLASS()
{
 st.top=0;
}
/*

	The push function
	Input : A value to be pushed on global stack
	Output: None, modifies global stack and its top
	Parameter Passing Method :By Value
	Called By : Post()
	Calls :none

*/
void STK_CLASS::push(double val)
{
	if ( st.top+1 >= MAX )
				cout<<"\nStack is Full\n ";
	st.top++;
	st.s[st.top] = val;
}
/*

	The pop function
	Input : None, uses global stack and top
	Output: Returns the value on top of stack
	Parameter Passing Method :None
	Called By : post()
	Calls :none

*/
double STK_CLASS::pop()
{
	double val;
	if ( st.top == -1 )
		cout<<"\nStack is Empty\n ";
	val = st.s[st.top];
	st.top- -;
	return(val);
}
