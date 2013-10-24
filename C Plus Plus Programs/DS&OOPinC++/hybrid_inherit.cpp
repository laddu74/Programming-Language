/* Hybrid inheritance*/
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
	class D
	{
	    protected:
		   int t;
	    public:
		  void get_d(int);
		  void put_d();
	};
	void D::get_d(int d)
	{
		t=d;
	}
	void D::put_d()
	{
		cout<<"\n The value of t is "<<t;
	}
	
	//multiple inheritance added in the multilevel inheritance
	class C:public B,public D
	{
		int z;
		public:
			void display();
	};
	void C::display()
	{
		z=y+t+10;
		put_a();//member of class A
		put_b();//member of class B
		put_d();//member of class D
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
		obj.get_d(30);
		obj.display();
		cout<<endl;
	}

