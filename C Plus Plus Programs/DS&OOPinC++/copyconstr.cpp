#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class test
{
 int x;
	 public:
	 //default constructor
	 test();
	 //parameterized constructor
	 test(int val)
	 {
		x=val;
	 }
	  //copy constructor
	 test(test &obj)
	 {
		x=obj.x;//entered is in value in obj.x
	 }
	 void show()
	 {
		cout<<x;
	 }
};
	void main()
	{
	 	 int val;
		 cout<<"Enter some number"<<endl;
		 cin>>val;
		 test Old(val);
		 //call for copy constructor
		 test New(Old); 
		 cout<<"\n The original value is: ";
		 Old.show();
		 cout<<"\n The New copied value is: ";
		 New.show();
		 cout<<endl;
		 getch();
	}
