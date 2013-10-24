#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
class Heap
{
	private:
		int arr[MAX];
		int n;
	public:
		Heap();
		void insert(int num);
		void makeheap();
		void heapsort();
		void display();
};
Heap::Heap()
{
	n=0;
	for(int i=0;i<MAX;i++)
		arr[i]=0;
}

void Heap::insert(int num)
{
	if(n<MAX)
	{
		arr[n]=num;
		n++;
	}
	else
		cout<<"\n Array is full";
}

void Heap::makeheap()
{
	for(int i=1;i<n;i++)
	{
		int val=arr[i];
		int j=i;
		int f=(j-1)/2;
		while(j>0&&arr[f]<val)//creating a MAX heap
		{
			arr[j]=arr[f];
			j=f;
			f=(j-1)/2;
		}
		arr[j]=val;
	}
}
void Heap::heapsort()
{
	for(int i=n-1;i>0;i--)
	{
		int temp=arr[i];
		arr[i]=arr[0];
		int k=0;
		int j;
		if(i==1)
			j=-1;
		else
			j=1;
		if(i>2&&arr[2]>arr[1])
			j=2;
		while(j>=0&& temp <arr[j])
		{
			arr[k]=arr[j];
			k=j;
			j=2*k+1;
			if(j+1<=i-1&&arr[j]<arr[j+1])
						j++;
			if(j>i-1)
						j=-1;
		}
		arr[k]=temp;
	}
}
void Heap::display()
{
	for(int i=0;i<n;i++)
				cout<<"\n"<<arr[i];
	cout<<"\n";
}
void main()
{
	Heap obj;

	obj.insert(14);
	obj.insert(12);
	obj.insert(9);
	obj.insert(8);
	obj.insert(7);
	obj.insert(10);
	obj.insert(18);
	cout<<"\n The Elements are ..."<<endl;
	obj.display();
	obj.makeheap();
	cout<<"\n Heapified"<<endl;
	obj.display();
	obj.heapsort();
	cout<<"\nElements sorted by Heap sort... "<<endl;
	obj.display();
	getch();
}
