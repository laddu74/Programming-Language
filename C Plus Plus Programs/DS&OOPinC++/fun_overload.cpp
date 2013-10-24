#include <iostream.h>
	class test {
		    private:
			int a,b,c,d;
		    public:
			int sum(int,int);
			int sum(int,int,int);
			int sum(int,int,int,int);
		   };
	int test::sum(int a,int b)
	{
	 return (a+b);
	}
	int test::sum(int a,int b,int c)
	{
	 return (a+b+c);
	}
	int test::sum(int a,int b,int c,int d)
	{
	 return (a+b+c+d);
	}
	void main()
	{
		test obj;
		int a, b, c, d,choice;
		int result=0;
		cout<"\n\t\t Main Menu";
		cout<"\n\t 1.Addition of two numbers";
		cout<"\n\t 2.Addition of three numbers";
		cout<"\n\t 3.Addition of four numbers"<endl;
		cout<"\n Enter Your choice : ";
		cin > choice;
		switch(choice)
		{
		  case 1: cout <"\nEnter 2 numbers: ";
			cin >> a >> b;
			result = obj.sum(a,b);
			break;
		  case 2: cout <"\nEnter 3 numbers: ";
			cin >> a >> b >> c;
			result = obj.sum(a,b,c);
			break;
		  case 3: cout <"\nEnter 4 numbers: ";
			cin >> a >> b >> c >> d;
			result = obj.sum(a,b,c,d);
			break;
		  default: cout <<"\nWrong Choice";
			   break;
		}
		cout <<"\n\nresult: " << result << endl;
		getch();
	}


