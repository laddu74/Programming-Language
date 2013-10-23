//Write a program for implementing the ascending preque
#include<iostream.h>
#include<conio.h>
#define SIZE 5
class A
{
private:
	int Que[SIZE];
public:
	int rear,front;
	A();
	int insert(int rear,int front);
	int Qfull(int rear);
	int Delete(int front);
	int Qempty(int rear,int front);
	void display(int rear,int front);

};
A::A()
{
front = 0;
rear = -1;
}
int A::insert(int rear,int front)
{
int item,j;
cout<<"\nEnter the element:";
cin>>item;
if(front == -1)
front ++;
j = rear;
while(j>=0 && item<Que[j])
{
Que[j+1] = Que[j];
j--;
}
Que[j+1] = item;
rear = rear+1;
return rear;

}
int A::Qfull(int rear)
{
if(rear == SIZE-1)
	return rear;
else
	return 0;

}
int A::Qempty(int rear,int front)
{
if((front == -1)||(front>rear))
return front;
else
return 0;
}

void A::display(int rear,int front)
{
int i;
cout<<"\nThe Queue is:";
for(i=front;i<=rear;i++)
cout<<" "<<Que[i];
}
void main()
{
int choice;
char ans;
A obj;
clrscr();
do
{
cout<<"\nPriority Queue:";
cout<<"\nMain Menu";
cout<<"\n1.Insert\n2.Delete\n3.Display";
cout<<"\nEnter the choice:";
cin>>choice;
switch(choice)
{
case 1:if(obj.Qfull(obj.rear))
       cout<<"\nQueue is Full";
       else
       obj.rear = obj.insert(obj.rear,obj.front);
       break;
case 2:if(obj.Qempty(obj.rear,obj.front))
       cout<<"\nCannot be deleted";
       else
       obj.front = obj.Delete(obj.front);
       break;
case 3:if(obj.Qempty(obj.rear,obj.front))
       cout<<"\nQueue is empty";
       else
       obj.display(obj.rear,obj.front);
       break;
default:
       cout<<"\nWrong Choice";
       break;
}
cout<<"\nDo yout want to continue?";
ans =getch();
}while(ans == 'y'|| ans == 'Y');
getch();
}
