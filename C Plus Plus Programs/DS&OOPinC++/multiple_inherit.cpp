/*Multiple Inheritance*/
	#include <iostream.h>
	
	class Operation
	{
		protected:
			int x, y;
		public:
			void set_values (int a, int b)
			{
				x=a;
				y=b;
			}
	};
	
	class Coutput
	{
		public:
			void display (int i);
	};
	
	void Coutput::display (int i)
	{
		cout << i << endl;
	}
	//product class inherits two base classes -
	//Operation and Coutput
	class product: public Operation, public Coutput
	{
		public:
			int function ()
			{
				return (x * y);
			}
	};
	//sum class inherits two base classes -
	//Operation and Coutput
	class sum: public Operation, public Coutput
	{
		public:
			int function ()
			{
				return (x + y);
			}
	};
	
	void main ()
	{
		product obj_pr;//object of product class
		sum obj_sum;//object of sum class
		obj_pr.set_values (10,20);
		obj_sum.set_values (10,20);
		cout<<"\n The product of 10 and 20 is "<<endl;
		obj_pr.output (obj_pr.function());
		cout<<"\n The sum of 10 and 20 is "<<endl;
		obj_sum.output (obj_sum.function());
	}
