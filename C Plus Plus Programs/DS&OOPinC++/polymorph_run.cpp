#include <iostream.h>
	class base
	{
	  public:
		 int i;
		 base(int x)//constructor
		 {
		  i = x;
		 }
	  	virtual void function()
	  	{
	    		cout << "Using base version of function(): ";
	    		cout << i << "\n";
	  	}
	};
	class derived1 : public base
	{
	  public:
	//constructor for object creation
	 derived1(int x):base(x){ }
	  void function()
	  {
	   cout < "Using derived1’s version of function(): ";
	   cout < i+i << "\n";
	  }
	};
	class derived2 : public base
	{
	 public:
	   derived2(int x):base(x){ }//constructor for object creation
	   void function()
	   {
	    cout << "Using derived2’s version of function(): ";
	    cout << i*i << "\n";
	  }
	};
	void main()
	{
	  base *p;
	  int num;
	  cout<<"\n Enter Some number ";
	  cin>>num;
	  base obj(num);
	  derived1 d1_obj(num);
	  derived2 d2_obj(num);
	  p=&obj;//base object’s address
	  p->function(); //base class function
	  p = &d1_obj;//derived1 object’s address
	  p->function(); //derived1 class function()
	  p = &d2_obj;//derived2 object’s address
	  p->function(); //derived2 class function()
	}

