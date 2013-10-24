/* Multilevel Inheritance */
	#include<iostream.h>
	class A 
	{
		protected:
			int x;
		public:
			void get_a(int);
			void put_a();
	};
	void A::get_a(int a)
	{
		x=a;
	}
	void A::put_a()
	{
		cout<<"\n The value of x is "<<x;
	}
	class B:public A
	{
		protected:
			int y;
		public:
			void get_b(int);
			void put_b();
	};
	void B::get_b(int b)
	{
		y=b;
	}
	void B::put_b()
	{
		cout<<"\n The value of y is "<<y;
	}
	class C:public B
	{
		int z;
		public:
			void display();
	};
	void C::display()
	{
		z=y+10;
		put_a();//member of class A
		put_b();//member of class B
		cout<<"\n The value of z is "<<z;
	}
	void main()
	{
		C obj;//object of class C
		//accessing class A member via object of class C
		obj.get_a(10);
		//accessing class B member via object of class C
		obj.get_b(20);
		////accessing class C member via object of class C
		obj.display();
		cout<<endl;
	}
			
