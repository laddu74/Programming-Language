/*Single Inheritance*/
	#include <iostream.h>
	class Base
	{
	 public:
			 int x;
	 void set_x(int n)
	 {
		x = n;
	 }
	 void show_x( )
	 {
		cout<<"\n\t Base class ...";
		cout <<"\n\t x= "<<x;
	 }
	};
	class derived : public Base
	{
	 int y;
	 public:
	 void set_y(int n)
	 {
		y = n;
	 }
	 void show_xy()
	 {
		cout<<"\n\n\t Derived class ...";
		cout<<"\n\t x = "<<x;
		cout <<"\n\t y= "<<y;
	 }
	};
	void main()
	{
	 derived obj;
	 int x, y;
	 cout<<"\n Enter the value of x";
	 cin>>x;
	 cout<<"\n Enter the value of y";
	 cin>>y;
	 obj.set_x(x);//inherits base class
	 obj.set_y(y); // access member of derived class
	 obj.show_x();//inherits base class
	 obj.show_xy(); // access member of derived class
	}
