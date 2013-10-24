/**********************************************************************
 Program to sort the elements in ascending order using Quick Sort
**********************************************************************/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10
template <class T>
class Quick
{
 private:
	T arr[SIZE];
 public:
	 int get_data(int);
	 void quicksort(int,int);
	 int partition(int,int);
	 void swap(int,int);
	 void display(int);
};

/*
 This function is to input the elements
*/
template  <class T>
int Quick<T>::get_data(int n)
	{
		int i;
		cout<<"\n Enter Total numbers to sort : ";
		cin>>n;
		for(i=0;i<n;i++)
		{
		 cout<<"\nEnter Element";
		 cin>>arr[i];
		}
		return n;
	}
/*
This fuction is to sort the elements in a sublist
*/
template <class T>
void Quick<T>::quicksort(int p,int q)
{
 int j;
 if(p<q)
 {
   j=partition(p,q+1);//setting pivot element
   quicksort(p,j-1);//splitting of list
   quicksort(j+1,q);//splitting  of list
 }
}
/*
This function is to partition a list and decide the pivot element
*/
template <class T>
int Quick <T>::partition(int m,int p)
{
  T pivot=arr[m];
  int i=m,j=p;
  do
   {
    do
     {
       i++;
      }while(arr[i]<pivot);
    do
     {
      j--;
     }while(arr[j]>pivot);
    if(i<j)
     swap(i,j);
   }while(i<j);
   arr[m]=arr[j];
   arr[j]=pivot;
   return j;
}
template <class T>
void Quick<T>::swap(int i,int j)
{
  T p;
  p=arr[i];
  arr[i]=arr[j];
  arr[j]=p;
}

template <class T>
void Quick<T>::display(int n)
{
	for(int i=0;i<n;i++)
	 cout<<"  "<<arr[i];
}
void main()
{
 Quick <int> obj;//for integer elements
 Quick <char> obj1;//for character elements
 int n,i;
 clrscr();
 cout<<"\n\t\t Quick Sort Method \n";
 n=obj.get_data(n);
 obj.quicksort(0,n-1);
 cout<<"\n\n\t Sorted Aarry Is: \n";
 obj.display(n);
 cout<<"\n\n\t Enter the character type elements..."<<endl;
 n=obj1.get_data(n);
 obj1.quicksort(0,n-1);
 cout<<"\n\n\t Sorted Aarry Is: \n";
 obj1.display(n);
 getch();
}
