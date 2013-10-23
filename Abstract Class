//Abstract Class
#include<iostream.h>
#include<conio.h>
class cploygon
{
protected:
	int width,height;
public:
	void set_values(int a,int b){width = a;height = b;}
	virtual int area(void) = 0;

};
class CRectangle:public cplygon
{
public:
	int area(void){return(width*height);}
};
class CTriangle:public cploygon
{
public:
	int area(void){return (width*height/2);}
};
int main()
{
CRectangle rect;
CTriangle trgl;
cpolygon *ppoly1 = &rect;
cpolygon *ppoly2 = &trgl;
ppoly1->set_values(4,5);
ppoly2->set_values(4,5);
cout<<ppoly1->area()<<endl;
cout<<ppoly2->area()<<endl;
return 0;
}
