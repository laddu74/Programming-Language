#include<iostream.h>
#include<conio.h>

int n = 0;

class call
{
public:
	call()
	{
	cout<<"\nConstructor:"<<++n;
	}
	~call()
	{
	cout<<"\nDestructor:"<<--n;
	}
};

main()
{
call c1,c2,c3;
getch();
return 0;
}
