#include <iostream.h>

	class vector {
		public:
			int p,q;
			vector() {p=0;q=0;}// constructor without parameters
			vector (int,int);//constructor with parameters
			vector operator + (vector);//definition of operator +
	};
	
	vector::vector (int a, int b) {
		p = a;
		q = b;
	}
	
	vector vector::operator+ (vector obj)
	{
		vector temp;
		temp.p = p + obj.p;
		temp.q = q + obj.q;
		return (temp);
	}
	
	void main ()
	{
		vector a (10,20);
		vector b (1,2);
		vector c;
		c = a + b;
		cout<<"\n The Addition of Two vectors is...";
		cout << c.p <<" and "<<c.q;
		getch();
	}

