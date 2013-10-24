/******************************************************************************
This program is for implementing Merge Sort
******************************************************************************/
# include<iostream.h>
#include <conio.h>
# include<stdlib.h>

template <class T>
class Merge
{
 private:
 T a[10],b[10];
 int n;
 public:
 int get_data();
 void display_data();
 void combine(int,int,int);
 void merge_sort(int,int);
};

/*
This function is to accept elements in an array
*/
template <class T>
int Merge<T>::get_data()
{
	int i;
	cout<<"\n Enter the length of list :";
	cin>>n;
	cout<<"\n Enter list elments :";
	for(i=0;i<n;i++)
		 cin>>a[i];
	 return n;
}

// function to display sorted array
template <class T>
void Merge<T>::display_data()
{
	int i;
	cout<<"\n\n The Sorted Array Is ...\n";
	for(i=0;i<n;i++)
		 cout<<"  "<<a[i];
}

// Merge Subarray
template <class T>
void Merge<T>::combine(int low,int mid,int high)
{
	 int l,i,j,k;
	 l=low;
	 i=low;
	 j=mid+1;

	 while(l <= mid && j <= high)
	 {
			if(a[l]<=a[j])
				b[i]=a[l++];
			else
				b[i]=a[j++];
			i++;
	 }
	 if(l > mid )
			for(k=j;k<=high;k++)
				b[i++]=a[k];
	 else
			for(k=l;k<=mid;k++)
				b[i++]=a[k];

	 for(k=low;k<=high;k++)
			a[k]=b[k];
}
/* This function is to split the list into sublists
*/
template <class T>
void Merge<T>::merge_sort(int low,int high)
{
	 int mid;
	 if(low < high)
	 {
			mid = (low+high)/2;//split the list at mid
		merge_sort(low,mid);//first sublist
		merge_sort(mid+1,high);//second sublist
		combine(low,mid,high);//merging of two sublists
	 }
}

void main()
{
	int low,high,n;
	Merge <int> obj;
	Merge <char> obj1;
	clrscr();
	cout<<"\n Merge Sort \n";
	n=obj.get_data();
	low = 0;
	high = n - 1;
	obj.merge_sort(low,high);
	obj.display_data();
	cout<<"\n\n\t Enter the character type elements...\n";
	n=obj1.get_data();
	low = 0;
	high = n - 1;
	obj1.merge_sort(low,high);
	obj1.display_data();
	getch();
}
